#include <bits/stdc++.h>

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define PB push_back
#define MP make_pair
#define modulo 1000000007

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,luckyNums[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    cin >> n;

    REP(i,14)
    {
        if( n >= luckyNums[i]  )
        {
            if(n%luckyNums[i]==0)
            {
                cout << "YES" << "\n";
                return 0;
            }
        }
        else
        {
            cout << "NO" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";
}
