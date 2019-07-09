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

void visitAround(int i , int j , char graph[30][30] , bool visited[30][30]){
   visited[i][j] = true ;

   if(graph[i+1][j]=='1' && !visited[i+1][j] ) visitAround(i+1,j,graph,visited);
   else visited[i+1][j] ;

   if(graph[i-1][j]=='1' && !visited[i-1][j] ) visitAround(i-1,j,graph,visited);
   else visited[i-1][j] ;

   if(graph[i][j-1]=='1' && !visited[i][j-1] ) visitAround(i,j-1,graph,visited);
   else visited[i][j-1] ;

   if(graph[i][j+1]=='1' && !visited[i][j+1] ) visitAround(i,j+1,graph,visited);
   else visited[i][j+1] ;

   if(graph[i-1][j-1]=='1' && !visited[i-1][j-1] ) visitAround(i-1,j-1,graph,visited);
   else visited[i-1][j-1] ;

   if(graph[i+1][j-1]=='1' && !visited[i+1][j-1] ) visitAround(i+1,j-1,graph,visited);
   else visited[i+1][j-1] ;

   if(graph[i-1][j+1]=='1' && !visited[i-1][j+1] ) visitAround(i-1,j+1,graph,visited);
   else visited[i-1][j+1] ;

   if(graph[i+1][j+1]=='1' && !visited[i+1][j+1] ) visitAround(i+1,j+1,graph,visited);
   else visited[i+1][j+1] ;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ,ctr=0;

    while(cin >> n){
        ctr++;
        int eagles = 0 ;
        char graph[30][30];
        bool visited[30][30];
        REP(i,n+1)REP(j,n+1){
            cin >> graph[i][j] ;
            visited[i][j] = false;
        }

        REP(i,n+1){
            REP(j,n+1){
                if(graph[i][j]=='1' && !visited[i][j]){
                    visitAround(i,j,graph,visited);
                    eagles++;
                }
            }
        }
        cout<<"Image number "<<ctr<<" contains "<<eagles<<" war eagles."<<endl;
    }
    return 0;
}
