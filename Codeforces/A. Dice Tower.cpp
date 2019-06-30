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
int n , key ;
bool solve( vector<int> x , vector<int> y ){
    FOR(i,1,n){
        int key1 = 7 - key ;
        if(key==x[i] || key == y[i] || key1==x[i] || key1 == y[i]) return false ;
    }
    return true ;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> key ;
    vector<int> x(n),y(n);
    REP(i,n) cin >>  x[i] >> y[i] ;
    if(solve(x,y)) cout << "YES" ;
    else cout << "NO" ;

    return 0;
}
