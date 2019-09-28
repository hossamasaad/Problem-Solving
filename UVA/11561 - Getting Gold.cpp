/*
 * Author : Hossam Asaad
 */
#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;
int n,m,ctr=0;
char graph[55][55];
bool visited[55][55];

bool isValid(int a,int b)
{
    if( a<0 || b<0 || a >= m || b >= n ) return false;
    if( graph[a][b] == '#' ) return false;

    return true;
}

int dx[4] = { 1,-1,0,0};
int dy[4] = { 0,0,-1,1};

void dfs(int a,int b)
{
    if(!isValid(a,b)) return;
    if(visited[a][b]) return;

    visited[a][b] = true;
    if(graph[a][b] == 'G') ctr++;

    REP(i,4) if(graph[a+dx[i]][b+dy[i]] == 'T') return;
    REP(i,4) dfs( a+dx[i] , b+dy[i] );
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(cin >> n >> m)
    {
        int a,b;
        ctr = 0;
        memset(visited,false,sizeof(visited));
        REP(i,m)REP(j,n)
        {
            cin >> graph[i][j];
            if(graph[i][j]=='P')
            {
                a = i; b = j;
            }
        }
        dfs(a,b);
        cout << ctr << endl;
    }
    return 0;
}
