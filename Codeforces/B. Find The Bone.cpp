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

    ll n,m,k,x;
    cin >> n >> m >> k;
    bool holes[n+1];
    memset(holes,false,sizeof(holes));

    REP(i,m){
        cin >> x;
        holes[x] =true;
    }

    ll u,v,q=1;
    bool get = false;
    REP(i,k){
        if(holes[q] && !get){
            get = true;
        }
        cin >> u >> v;
        if(q==u && !get) q = v;
        else if(q==v && !get) q = u;
    }

    cout << q;
    return 0;
}
