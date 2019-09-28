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
int x,y,z,ctr=0;
char graph[12][12][12];
bool visited[12][12][12];

bool isValid(int i,int j,int k)
{
    if( i<0 || j<0 || k<0 ) return false;
    if( i >= x || j >= y || k >= z ) return false;
    if( graph[i][j][k] == '#' ) return false;

    return true;
}

void dfs(int i,int j,int k)
{
    if(!isValid(i,j,k)) return;
    if(visited[i][j][k]) return;
    visited[i][j][k] = true;

    ctr++;
    dfs(i+1,j,k); dfs(i,j+1,k); dfs(i,j,k+1);
    dfs(i-1,j,k); dfs(i,j-1,k); dfs(i,j,k-1);

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(visited,false,sizeof(visited));
    cin >> x >> y >> z;

    REP(i,x)REP(j,y)
    {
        cin >> graph[i][j];
    }
    int a,b;
    cin >> a >> b;
    dfs(0,a-1,b-1);
    cout << ctr;
    return 0;
}
