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
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,x,a=0,b=0;
    cin >> n;
    ll arr[100005];
    memset(arr,0,sizeof(arr));

    FOR(i,1,n){
        cin >> x;
        arr[x] = i;
    }

    cin >> m;

    REP(i,m){
        cin >> x;
        a += arr[x];
        b += n + 1 - arr[x];
    }
    cout << a << " " << b;
    return 0;
}
