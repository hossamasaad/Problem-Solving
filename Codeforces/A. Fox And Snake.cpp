#include <bits/stdc++.h>
#include <string>
 
const long double eps = 1e-12;
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
 
using namespace std;
 
int main()
{
    int n,m,q=1;
    cin >> n >> m;
 
    REP(i,n){
        REP(j,m)
        {
            if(i%2==0) cout << '#';
            else
            {
                if( q==0 && j==0) cout << '#';
                else if( q==1 && j == m-1) cout << '#';
                else cout << '.';
            }
        }
        cout << '\n';
        if(q==1 && i%2 != 0) q=0;
        else  if (q==0 && i%2 != 0) q=1;
    }
}
