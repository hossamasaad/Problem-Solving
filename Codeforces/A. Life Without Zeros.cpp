#include <bits/stdc++.h>
#include <string>
 
const long double eps = 1e-12;
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
 
using namespace std;

int func(int x){
    string s = to_string(x);
    int len = s.length();
    REP(i,len)
    {
        if(s[i]=='0'){
            s.erase(i,1);
            i--;
        }
    }
    return stoi(s);
}
int main()
{
    int x,y,z;
    cin >> x >> y;
    z = x + y;
    x = func(x);
    y = func(y);
    z = func(z);

    if(x+y==z) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}
