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
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)

using namespace std;

check(ll a, ll b, ll c){

    if(a+b<=c) return false;
    if(b+c<=a) return false;
    if(c+a<=b) return false;

    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v(n);

    REP(i,n) cin >> v[i];

    sort(v.begin(),v.end());
    ll a,b,c;
    REP(i,n-2){
        a = v[i];
        b = v[i+1];
        c = v[i+2];
        if(check(a,b,c)){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
