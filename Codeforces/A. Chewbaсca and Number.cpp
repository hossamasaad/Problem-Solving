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
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    string x ;
    cin >> x;
    REP(i,x.length()){
        k = x[i]-'0';
        if(i==0 && k==9) continue;
        if(k >= 5){
            k = 9 - k ;
            x[i] = k + '0' ;
        }
    }
    cout << x;
}
