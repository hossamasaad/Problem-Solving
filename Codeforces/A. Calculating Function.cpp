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
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

ll solve(ll n){
    if(n==1)    return -1 ;
    if(n%2 == 0)return n/2;
    else        return n/2 - n;
}
int main() {
    ll n ;
    cin >> n;
    cout << solve(n);
    return 0;
}
