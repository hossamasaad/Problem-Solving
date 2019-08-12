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

ll n,m,t,l,r;
ll A[100005];
ll B[100005];
ll C[100005];
ll A2[100005];



void solve(){

    sort(A2,A2+n+1);
    FOR(i,1,n){
        B[i] = B[i-1] + A[i];
        C[i] = C[i-1] + A2[i];
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    A[0] = 0; B[0] = 0; C[0] = 0; A2[0]= 0;

    cin >> n;
    FOR(i,1,n){
        cin >> A[i];
        A2[i] = A[i];
    }
    solve();

    cin >> m;
    while(m--){
        cin >> t >> l >> r;
        if(t==1){
            cout << B[r] - B[l-1] << endl;
        }else{
            cout << C[r] - C[l-1] << endl;
        }
    }
    return 0;
}
