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

long double func(ll n,ll m){
    ll x = n-m;
    long double r = 1;
    if(x>m){
        FORD(i,n,x+1) r *= i;
        FOR(i,2,m) r /= i;
        return r;
    }else{
        FORD(i,n,m+1) r *= i;
        FOR(i,2,x) r /= i;
        return r;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin >> n >> m;
    while(true){
        if(n==0&&m==0)
            break;

        long double r = func(n,m);
        cout << n <<  " things taken " << m << " at a time is " << fixed << setprecision(0) << r << " exactly." << endl;
        cin >> n >> m;
    }
    return 0;
}
