/*
 * Author : Hossam Asaad
 */
#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=1;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

char graph[30][30];
bool visited[30][30];

void visitAround(int i , int j){
    visited[i][j] = true ;

    FOR(dx,-1,1)FOR(dy,-1,1)
    {
        if( i==0 && j==0 ) continue;
        if(graph[i+dx][j+dy]=='1' && !visited[i+dx][j+dy] ) visitAround(i+dx,j+dy);
        else visited[i+dx][j+dy] = true;
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ,ctr=0;

    while(cin >> n){
        ctr++;
        int eagles = 0 ;
        
        memset(graph,0,sizeof(graph));
        memset(visited,false,sizeof(visited));

        REP(i,n+1)REP(j,n+1) cin >> graph[i][j];

        REP(i,n+1){
            REP(j,n+1){
                if(graph[i][j]=='1' && !visited[i][j]){
                    visitAround(i,j);
                    eagles++;
                }
            }
        }

        cout<<"Image number "<<ctr<<" contains "<<eagles<<" war eagles."<<endl;
    }
    return 0;
}
