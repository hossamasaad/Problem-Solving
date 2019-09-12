#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n,m,r=0,idx;
	cin >> n >> m;

	vector< ll > cities(n),towers(m+2);
	vector< ll > :: iterator it;
	towers[0] 	= -9999999999;
	towers[m+1] =  9999999999;

	REP(i,n)   cin >> cities[i];
	FOR(i,1,m) cin >> towers[i];

	REP(i,n){
		it = upper_bound(towers.begin(), towers.end(), cities[i]);
		idx = it - towers.begin();
		r = max( r, min( abs( cities[i]-towers[idx] ) , abs(cities[i]-towers[idx-1] )));
	}

	cout << r << "\n";
}
