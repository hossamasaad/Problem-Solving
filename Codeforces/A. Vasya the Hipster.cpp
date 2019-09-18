#include <bits/stdc++.h>
 
const long double eps = 1e-12;
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
 
using namespace std;
 
int main()
{
    int n,m;
    cin >> n >> m;
    cout << min(n,m) << " " << ( max(n,m) - min(n,m) ) / 2 << endl;
}
