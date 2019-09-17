#include <bits/stdc++.h>
 
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
 
using namespace std;
 
int main() 
{
    int n,m,k;
    double p1=0,p2=99999999 ,r1=0,input,A,B,ans;
    
    cin >> n;
    REP(i,n)
    {
        cin >> input;
        if(input>r1) r1 = input;
    }
 
    cin >> m;
    REP(i,m)
    {
        cin >> input;
        if(input>p1) p1 = input;
    }
 
    cin >> k;
    REP(i,k)
    {
        cin >> input;
        if(input<p2) p2 = input;
    }
 
    cin >> A >> B;
 
    ans = ( (double) B * p1 * r1 * r1 ) / ( (double) A * p2 + B * p1 );
    cout << fixed << setprecision(8) << sqrt(ans);
}
