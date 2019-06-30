/*
 * Author ; Hossam Asaad
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
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

int main() {
    ll r , l;
    cin >> l >> r ;
    FOR(i,l,r)
        FOR(j,i+1,r)
            FOR(k,j+1,r)
                if(__gcd(i,j)==1 && __gcd(j,k)==1 && __gcd(i,k)!=1){
                    cout << i << " " << j << " " << k ;
                    return 0 ;
                }

    cout << -1 ;
    return 0;
}
