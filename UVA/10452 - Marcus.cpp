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

vector<string> searchPath(int i,int j,char graph[10][10],vector<string> path,bool visited[10][10]){

    visited[i][j] = true ;
    char right=' ' , left=' '  , forth=' '  ;
    if(!visited[i][j+1]) right = graph[i][j+1];
    if(!visited[i][j-1]) left  = graph[i][j-1];
    if(!visited[i-1][j]) forth = graph[i-1][j];

    if(right == '#'){
        path.push_back("right");
        return path;
    }
    else if(right == 'I'||right == 'E'||right == 'H'||right == 'O'||right == 'V'||right == 'A'){
        path.push_back("right");
        path = searchPath(i,j+1,graph,path,visited);
    }

    else if(left == '#'){
        path.push_back("left");
        return path;
    }
    else if(left == 'I'||left == 'E'||left == 'H'||left == 'O'||left == 'V'||left == 'A'){
        path.push_back("left");
        path = searchPath(i,j-1,graph,path,visited);
    }

    else if(forth == '#'){
        path.push_back("forth");
        return path;
    }
    else if(forth == 'I'||forth == 'E'||forth == 'H'||forth == 'O'||forth == 'V'||forth == 'A'){
        path.push_back("forth");
        path = searchPath(i-1,j,graph,path,visited);
    }

    return path ;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--){

        int n,m,x,y;
        char graph[10][10];
        bool visited[10][10];
        vector<string> path,result;

        cin >> n >> m;
        REP(i,n+1)REP(j,m+1){
            cin >> graph[i][j];
            visited[i][j]=false;
            if(graph[i][j]=='@'){
                x=i;
                y=j;
            }
        }

        result = searchPath(x,y,graph,path,visited);
        cout << result[0];
        for (int i = 1; i < result.size(); ++i)
            cout << ' ' << result[i];
        cout << '\n';

    }

    return 0;
}
