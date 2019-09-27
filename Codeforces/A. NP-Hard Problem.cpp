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
 
    int n,m,a,b;
    cin >> n >> m;
 
    vector<int> v[100005];
    int colored[100005];
    memset(colored,-1,sizeof(colored));
 
    REP(i,m)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
 
    vector<int> arya,pari;
 
	bool cyclic = false;
	FOR(i,1,n)
	{
		if( colored[i] == -1 )
		{
			queue<int> q; q.push(i);
    		colored[i] = 0;
			while(!q.empty() && !cyclic)
			{
				int u = q.front(); q.pop();
				int len = v[u].size();
 
				if(colored[u]==0) pari.push_back(u);
				else if(colored[u]==1) arya.push_back(u);
				
				REP(i,len)
				{
					if(colored[ v[u][i] ] == -1)
					{
						if(colored[u] == 1) colored[ v[u][i] ] = 0;
						else colored[ v[u][i] ] = 1;
						q.push( v[u][i] );
					}
					else if( colored[ v[u][i] ] == colored[u] )
					{
						cyclic = true;
						break;			
					}
				}
			}
		}
	}
    
 
	if(cyclic) cout << -1;
	else
	{
		int len = arya.size();
		cout << len << endl;
		REP(i,len) cout << arya[i] << " ";
		
		cout << endl;
 
		len = pari.size();
		cout << len << endl;
		REP(i,len) cout << pari[i] << " ";
	}
 
    return 0;
}
