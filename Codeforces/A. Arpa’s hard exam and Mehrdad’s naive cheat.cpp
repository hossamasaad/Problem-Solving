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

int solve(int n){
    if(n==0) return 1;
    int x = 1;
    n %= 4 ;
    n += 4 ;
    REP(i,n){
        x *= 8;
        x %= 10;
    }
    return x ;
}
int main() {
    int n ;
    cin >> n;
    cout << solve(n);
    return 0;
}
