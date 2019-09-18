#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)

using namespace std;

int main(){

    ll n,x,ctr=1,cnt=1;
    bool start = false;
    cin >> n;

    REP(i,n)
    {
        cin >> x;
        if(x==1 && !start){
            start = true;
            continue;
        }

        if(start && x==1)
        {
            ctr *= cnt;
            cnt = 1;
        }

        if(start && x==0) cnt++;
    }
    if(start) cout << ctr;
    else cout << 0;
}
