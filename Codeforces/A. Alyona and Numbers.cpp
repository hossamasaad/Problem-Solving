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
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)

using namespace std;

int main() {

    ll n , m , ctr=0 ;
    cin >> n >> m ;
    ctr = m * (n / 5) ;
    n = n % 5 ;
    ctr += n * (m / 5) ;
    m = m % 5 ;
    FOR(i,1,n)
        FOR(j,1,m)
            if( (i+j)%5 == 0 ) ctr++;


    cout << ctr ;
    return 0;
}
