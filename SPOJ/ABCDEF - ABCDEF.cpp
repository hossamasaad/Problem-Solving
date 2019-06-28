/*
 * Author : Hossam Asaad
 * Binary Search
 * Lower&upper bound
 */

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,high,low,ctr=0;
    cin >> n;
    int a[n];
    vector<int> v ;
    REP(i,n) cin >> a[i] ;
    REP(i,n){
        REP(j,n){
            REP(k,n){
                v.push_back(a[i]*a[j]+a[k]);
            }
        }
    }
    sort(v.begin(),v.end());
    REP(i,n){
        REP(j,n){
            REP(k,n){
                if(a[k]==0) continue;
                int q = (a[i]+a[j]) * a[k];
                low = lower_bound(v.begin(),v.end(),q)-v.begin();
                high= upper_bound(v.begin(),v.end(),q)-v.begin();
                ctr += high-low ;
            }
        }
    }
    cout << ctr ;
    return 0;
}
