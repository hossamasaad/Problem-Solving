#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

int main()
{
    ll n,m,x,y,v,dx,dy,steps=0;
    cin >> n >> m;
    cin >> x >> y;
    cin >> v;

    REP(i,v)
    {
        cin >> dx >> dy;
        ll c1 = 9999999999,c2 = 99999999999;

        if(dx>0) c1 = (n-x)/dx;
        else if(dx<0) c1 = (1-x)/dx;

        if(dy>0) c2 = (m-y)/dy;
        else if(dy<0) c2 = (1-y)/dy;

        x += dx * min(c1,c2);
        y += dy * min(c1,c2);

        steps += min(c1,c2);
    }
    cout << steps << '\n';
}
