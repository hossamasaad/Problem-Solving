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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,g;
    cin >> n >> m >> g;

    ll t[n],a[m];
    REP(i,n) cin >> t[i];
    REP(i,m) cin >> a[i];

    ll maxi=0,ctr;
    REP(i,n-1){
        ctr=0;
        REP(j,m){

            if(t[i+1]-t[i]>=a[j]){
                ctr++;
            }
        }
        if(ctr>maxi) maxi = ctr;
    }

    cout << maxi;
}
