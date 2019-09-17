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
	int p,q,l,r,a,b,x,y;

	cin >> p >> q >> l >> r;
	bool visited[1005] = { false };

	vector< pair<int,int> > z;
	REP(i,p)
	{
		cin >> a >> b;
		z.push_back( make_pair(a,b) );
	}

	int ctr=0;
	REP(i,q)
	{
		cin >> a >> b;
		REP(j,p)
		{
			x = z[j].first - b;
			y = z[j].second - a;

			if( y<l || x>r ) continue;

			FOR( k , max(x,l) , min(y,r) ){
				if(!visited[k]){
					visited[k] = true;
					ctr++;
				}
			}
		}
	}
	cout << ctr;
	return 0;
}
