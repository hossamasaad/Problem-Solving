#include <bits/stdc++.h>
#include <string>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> v;
    REP(i,10000) v.push_back( i*i );
        
    int n;
    while (cin >> n)
    {
        int len = v.size();
        REP(i,len)
        {
            if (v[i] >= pow(10 , n) ) break;

            int U = v[i] / (int)pow(10, n / 2);
            int L = v[i] % (int)pow(10, n / 2);

            if ((U + L) * (U + L) == v[i])
                cout << setw(n) << setfill('0') << v[i] << endl;
        }
    }
    return 0;
}
