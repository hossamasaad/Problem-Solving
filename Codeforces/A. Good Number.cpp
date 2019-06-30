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
 
int main() {
    int n , k , ctr ;
    string x ;
    cin >> n >> k; // n = 1 k =0
    bool flag[k+1]; // 1
    memset(flag,false,sizeof(flag));
    ctr = n;       // ctr = 1
    REP(i,n){       // 0 >> 1
        cin >> x;   // x = 1000000
        REP(j,x.length()){ // 0 >> 1
            int idx = x[j]-'0';
            if(idx > k) continue;
            flag[idx] = true ;
        }
        REP(j,k+1){
            if ( flag[j] == false ){
                ctr--;
                break;
            }
        }
        memset(flag,false,sizeof(flag));
    }
    cout << ctr ;
    return 0;
}
