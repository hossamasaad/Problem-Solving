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

#define ll long long int
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)

using namespace std;

int n,m,ctr=0;
char c;
char graph[105][105];
bool visited[105][105];

int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

void visit(int x,int y,char q){
    visited[x][y] = true;
    REP(a,4){
        int i = x+dx[a];
        int j = y+dy[a];
        if(graph[i][j]==q&&!visited[i][j]){
            visit(i,j,q);
        }
    }
}

void visitAround(int x,int y){

    visited[x][y] = true;
    REP(a,4){

        int i = x+dx[a];
        int j = y+dy[a];

        if(!visited[i][j]){
            if(graph[i][j]=='.') visited[i][j]=true;
            else if(graph[i][j]==c) visitAround(i,j);
            else if(!visited[i][j]){
                ctr++;
                visit(i,j,graph[i][j]);
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    memset(graph,'.',sizeof(graph));
    memset(visited,false,sizeof(visited));
    cin >> n >> m >> c;
    bool s = false;
    FOR(i,1,n)FOR(j,1,m){
        cin >> graph[i][j];
        if(graph[i][j]==c && !s){
            x = i;
            y = j;
            s = true;
        }
    }

    visitAround(x,y);
    cout << ctr;
    return 0;
}
