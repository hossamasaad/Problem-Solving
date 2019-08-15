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

    ll n,m,k,t;
    cin >> n >> m >> k >> t;

    vector<ll> v;

    ll x,y,tmp;
    REP(i,k){
        cin >> x >> y;
        x--;
        y--;
        tmp = x*m + y;
        v.push_back(tmp);
    }

    REP(i,t){
        ll ctr = 0;
        cin >> x >> y;
        x--;
        y--;
        tmp = x*m + y;
        REP(j,k){
            if(tmp == v[j]){
                ctr = -1;
                break;
            }
            if(v[j]<tmp){
                ctr++;
            }
        }
        if(ctr==-1){
            cout << "Waste" << endl;
        }else{
            tmp = (tmp - ctr)%3;
            if(tmp == 0)      cout << "Carrots" << endl;
            else if(tmp == 1) cout << "Kiwis"   << endl;
            else if(tmp == 2) cout << "Grapes"  << endl;
        }
    }

    return 0;
}
