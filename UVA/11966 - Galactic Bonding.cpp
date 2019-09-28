#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;
int t,n,cas=0;
double d;
double x[1005],y[1005],graph[1005][1005];
bool visited[1005];

double calcDis( double x1, double y1, double x2, double y2)
{
    double k1 = x1 - x2;
    double k2 = y1 - y2;
    return sqrt(k1*k1 + k2*k2);
}

void dfs(int i)
{
    visited[i] = true;
    REP(j,n)
    {
        if( !visited[j] && graph[i][j]<=d) dfs(j);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(t--)
    {
        cas++;
        cin >> n >> d;
        REP(i,n) cin >> x[i] >> y[i];

        memset(visited,false,sizeof(visited));

        REP(i,n)
        {
            graph[i][i] = 0;
            FOR(j,i+1,n-1)
            {
                graph[i][j] = graph[j][i] = calcDis(x[i],y[i],x[j],y[j]);
            }
        }
        int ctr = 0;
        REP(i,n)
        {
            if(!visited[i])
            {
                dfs(i);
                ctr++;
            }
        }

        cout << "Case " << cas <<": " << ctr << endl;
    }
    
    return 0;
}
