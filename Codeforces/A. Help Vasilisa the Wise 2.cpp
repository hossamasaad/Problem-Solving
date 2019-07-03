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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r1 , r2 , c1 , c2 , d1 , d2 ;
    cin >> r1 >> r2 ;
    cin >> c1 >> c2 ;
    cin >> d1 >> d2 ;

    FOR(i,1,9){
        FOR(j,1,9){
            if(i==j) continue ;
            FOR(k,1,9){
                if( i == k || j == k) continue;
                FOR(l,1,9){
                    if(i==l || j==l || k==l) continue ;
                    if( i+j==r1 &&
                        k+l==r2 &&
                        i+k==c1 &&
                        j+l==c2 &&
                        i+l==d1 &&
                        j+k==d2){
                            cout << i << " " << j << "\n" << k << " " << l;
                            return 0;
                        }
                }
            }
        }
    }
    cout << -1 ;
}
