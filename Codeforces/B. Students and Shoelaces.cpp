#include <bits/stdc++.h>
 
#define eps 1e-8
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
 
using namespace std;
 
int main()
{
	int n,m,x,y;
	cin >> n >> m;
  
	vector< int > v[n+1];
	REP(i,m)
	{
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	int r=0;
	while(true)
	{
		bool finished = true;
		int ctr=0;
		vector <int> x,y;
		FOR(i,1,n)
		{
			if(v[i].size() == 1)
			{
				finished = false;
				x.push_back(v[i][0]);
				y.push_back(i);
				ctr++;
			}
		}
		if(ctr>0) r++;
		if(finished) break;
		REP(i,ctr)
		{
			REP(j,v[ x[i] ].size()){
				if( v[ x[i] ][j] == y[i] )
				{
					v[ x[i] ].erase(j+v[ x[i] ].begin());
					break;
				}
			}
			REP(j,v[ y[i] ].size()){
				if( v[ y[i] ][j] == x[i] )
				{
					v[ y[i] ].erase(j+v[ y[i] ].begin());
					break;
				}
			}
		}
		x.clear(); y.clear();
	}
	cout << r;
}
