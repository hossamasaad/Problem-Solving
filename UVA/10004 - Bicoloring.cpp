#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,l,a,b;
    while(cin >> n && n)
    {
        cin >> l;
        vector<int> v[205];
        int colored[205];
        memset(colored,-1,sizeof(colored));

        REP(i,l)
        {
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        queue<int> q; q.push(b);
        colored[b] = 0;
        bool colorable = true;                 // q = {0}

        while(!q.empty() && colorable)
        {
            int u = q.front(); q.pop();         // 0 --> 1,2
            int len = v[u].size();              // 1 --> 0,2
            REP(i,len)                          // 2 --> 0,1
            {                                   // {0,1,1}
                if(colored[ v[u][i] ] == -1)
                {
                    if(colored[u] == 1) colored[ v[u][i] ] = 0;
                    else colored[ v[u][i] ] = 1;
                    q.push( v[u][i] );
                }
                else if( colored[u] == colored[ v[u][i] ])
                {
                    colorable = false;
                    break;
                }
            }
        }

        if(colorable) cout << "BICOLORABLE." << endl;
        else cout  << "NOT BICOLORABLE." << endl;
    }

    return 0;
}
