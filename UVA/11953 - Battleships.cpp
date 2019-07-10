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
#define REP(i,n) for(int i=1;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

void visitAround(int i,int j, char graph[105][105] , bool visited[105][105]){
    visited[i][j] = true ;

    if( (graph[i+1][j]=='x' || graph[i+1][j]=='@' ) && !visited[i+1][j] )visitAround(i+1,j,graph,visited);
    if( (graph[i-1][j]=='x' || graph[i-1][j]=='@' ) && !visited[i-1][j] )visitAround(i-1,j,graph,visited);
    if( (graph[i][j+1]=='x' || graph[i][j+1]=='@' ) && !visited[i][j+1] )visitAround(i,j+1,graph,visited);
    if( (graph[i][j-1]=='x' || graph[i][j-1]=='@' ) && !visited[i][j-1] )visitAround(i,j-1,graph,visited);

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,cas=0;
    cin >> t;
    while(t--){
        cas++;
        int n,ctr=0;
        char graph[105][105];
        bool visited[105][105];

        memset(visited,false,sizeof(visited));
        memset(graph,'.',sizeof(graph));
        cin >> n;
        REP(i,n+1)REP(j,n+1) cin >> graph[i][j];

        REP(i,n+1)REP(j,n+1){
            if(graph[i][j] == 'x' && !visited[i][j] ){
                visitAround(i,j,graph,visited);
                ctr++;
            }
        }
        cout << "Case " << cas << ": " << ctr << endl;
    }

    return 0;
}
