/*
 * Author : Hossam Asaad
 */
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

vector<int> graph[105];
bool used[105];
int cnt1=0, cnt2=0;

void dfs(int x){
    used[x] = true ;
    cnt1 += graph[x].size();
    cnt2++;

    for(int i=0; i<graph[x].size(); i++){
        if(!used[ graph[x][i] ]) dfs( graph[x][i] ) ;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    memset(used , false , sizeof(used) );

    int x, y;
    for(int i=0 ; i<m ; i++){
        cin >> x >> y ;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int stop = 0;
    for(int i=1 ; i<=n ; i++){
        if(!used[i]){
            cnt1 = 0;
            cnt2 = 0;
            dfs(i);
            if(cnt2%2==1 && cnt2*2==cnt1){
                stop++;
            }
        }
    }
    cout << stop + (n-stop)%2 ;
    return 0;
}
