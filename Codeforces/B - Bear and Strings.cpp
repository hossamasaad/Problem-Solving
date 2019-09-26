#include <bits/stdc++.h>
 
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
 
using namespace std;
string s;
ll len,ctr=0,lastB=0;
 
int main()
{
    cin >> s;
    len = s.length();
    
    REP(i,len-3) 
    {
        if( s[i] == 'b' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'r')
        {
           ctr += (i+1-lastB)*(len-(i+3));
           lastB = i + 1;
        }
    }
 
    cout << ctr;
}
