#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)


int main() {

    ll s,d,idx,x;

    while(cin >> s >> d)
    {
        vector<ll> v,answers;
        vector<ll> :: iterator it;
        x = 0;  

        while(x < d)
        {
            x += s;
            v.push_back(x);
            answers.push_back(s);
            s++;
        }

        it = lower_bound(v.begin() , v.end() , d);
        idx = it - v.begin();
        cout << answers[idx] << endl;
    }
}
