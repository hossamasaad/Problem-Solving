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

#define ll long long int
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,f,x,y,tmp,tmp2,sum=0;
    cin >> n >> f;
    vector<ll> v;
    REP(i,n){
        cin >> x >> y;
        tmp  = min(x,y);
        tmp2 = min(2*x,y);
        sum += tmp;
        v.push_back(tmp2-tmp);
    }
    sort(v.rbegin(),v.rend());
    REP(i,f){
        sum += v[i];
    }

    cout << sum;
    return 0;
}
