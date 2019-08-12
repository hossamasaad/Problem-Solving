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

ll n,q,t,l,r;
ll A[100005];
ll B[100005];

void solve(){
    FOR(i,1,n)
        B[i] = B[i-1] + A[i];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    A[0] = 0; B[0] = 0;

    cin >> n;
    FOR(i,1,n){
        cin >> A[i];
    }
    solve();

    cin >> q;
    while(q--){
        cin >> l >> r;
        cout << B[r+1] - B[l] << endl;
    }
    return 0;
}
