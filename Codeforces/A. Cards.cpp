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
    int n,ns=0,zs=0;
    string s;
    cin >> n >> s;
    REP(i,n)
    {
        if(s[i]=='z') zs++;
        else if(s[i]=='n') ns++;
    }
 
    REP(i,ns) cout << 1 << " ";
    REP(i,zs) cout << 0 << " ";
}
