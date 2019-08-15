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

    ll n,x,sum=0;
    cin >> n >> x;
    vector<int> v(n);
    REP(i,n)
        cin >> v[i];

    sort(v.begin(),v.end());
    REP(i,n){
        sum += x*v[i];
        if(x>1)x--;
    }

    cout << sum;
    return 0;
}
