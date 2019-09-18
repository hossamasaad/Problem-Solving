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
    int vp,vd,t,f,c,ctr=0;
    cin >> vp >> vd >> t >> f >> c;
 
    if(vp>=vd)
    {
        cout << 0 << "\n";
        return 0;
    }
    
    double princess = t * vp , dragon = 0;
    while(princess + eps < c)
    {
        double xx = vd * princess / (vd-vp);
 
        if( xx + eps < c )
        {
            ctr++;
            princess += f*vp + 2.0 * vp *  princess / (vd-vp) ;
        }
        else break;
    }
 
    cout << ctr << "\n";
}
