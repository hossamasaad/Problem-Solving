#include "bits/stdc++.h"

#define ll long long

using namespace std;

vector<ll> factorization(ll n)
{
    vector<ll> p;
    for (ll i = 2; i * i <= n; ++i) {
        while(n%i == 0)
            p.push_back(i),n /= i;
    }

    if(n>1)
        p.push_back(n);

    return p;
}

int main() {
    ll n;
    while(cin >> n && n)
    {
        bool state = true;
        if(n < 0){
            state = false;
            n *= -1;
        }

        vector<ll> answer = factorization(n);

        if(state){
            cout << n << " = " << answer[0];
            for (ll i = 1; i < answer.size(); ++i) {
                cout << " x " << answer[i];
            }
            cout << endl;
        }
        else{
            cout << "-" << n << " = " << "-1";
            for (ll i = 0; i < answer.size(); ++i) {
                cout << " x " << answer[i];
            }
            cout << endl;
        }
    }
}
