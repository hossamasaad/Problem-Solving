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
    int l,r,a;
    cin >> l >> r >> a;
    int maxi = max(l,r);
    int mini = min(l,r);
    int sub = maxi - mini;
    if(a>sub) a -= sub;
    else {
        cout << (mini+a)*2;
        return 0;
    }

    cout << ( (a/2) + maxi ) * 2 << "\n";
}
