#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;
int n,m,r1,r2,c1,c2;
char graph[505][505];
bool visited[505][505];

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

bool reach = false;

bool isValid(int r, int c)
{
    if(r<0 || c<0 || r>=n || c>=m || graph[r][c] == 'X')
        return false;
    return true;
}

void dfs(int r, int c)
{

    if(visited[r][c] || !isValid(r, c) || reach) return;
    visited[r][c] = true;

    REP(i,4)
    {
        if( r + dx[i] == r2 && c + dy[i] == c2 )
        {
            reach = true;
            return;
        }
        dfs(r + dx[i],c + dy[i]);
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(visited,false,sizeof(visited));
    cin >> n >> m;
    REP(i,n)REP(j,m) cin >> graph[i][j];
    cin >> r1 >> c1;
    cin >> r2 >> c2;
    r1--;r2--;c1--;c2--;

    graph[r1][c1] = '.';
    if( r1 == r2 && c1 == c2 )
    {
        bool state = false;
        REP(i,4)
        {
            if(isValid(r1+dx[i], c2+dy[i])) state = true;
        }
        if(state) cout << "YES";
        else cout << "NO";
        return 0;
    }

    dfs(r1,c1);

    if(reach)
    {
        if(graph[r2][c2]=='X') cout << "YES";
        else{
            int ctr = 0;
            REP(i,4)
            {
                if(isValid(r2+dx[i], c2+dy[i]))
                    ctr++;
            }
            if(ctr>=2) cout << "YES";
            else cout << "NO";
        }
    }
    else cout << "NO";
    return 0;
}
