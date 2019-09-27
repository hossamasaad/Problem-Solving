#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

vector<int> v[105];
int colored[105];

int bfs(int s)
{
    queue<int> q; q.push(s);
    colored[s] = 0;
    int ctr = 0;

    while(!q.empty())
    {
        int u = q.front(); q.pop();
        int len = v[u].size();
        REP(i,len)
        {
            if( colored[ v[u][i] ] == -1 )
            {
                if(colored[u]==1) colored[ v[u][i] ] = 0;
                else colored[ v[u][i] ] = 1;
                q.push(v[u][i]);
            }
            else if( colored[ v[u][i] ] == colored[u] )
            {
                return 1;
            }
        }
    }   
    return 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,a,b,s;
    cin >> n >> m;
    
    memset(colored,-1,sizeof(colored));

    REP(i,m)
    {
        cin >> a >> b;
        s = a;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int ctr = 0;
    FOR(i,1,n)
    {
        if(colored[i] == -1)
        {
            ctr += bfs(i);
        }
    }

    if( (n%2 == 0 && ctr%2 == 0 && ctr != 1) || (n%2 == 1 && ctr%2 == 1)  ) cout << ctr;
    else cout << ctr+1;
    return 0;
}
