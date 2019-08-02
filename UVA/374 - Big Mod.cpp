/*
 * Author : Hossam Asaad
 */
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

ll solve(ll b, ll p, ll m){
    ll ans = 1;
    while(p){
        if(p&1){
            ans *= b;
            ans %= m;
        }
        p >>= 1;
        b *= b;
        b %= m;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll B, P, M;
    while(cin >> B >> P >> M){
        cout << solve(B,P,M) << endl;
    }
    return 0;
}
