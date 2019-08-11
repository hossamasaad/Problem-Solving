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

    int n;
    cin >> n;
    while(n){
        int arr[n] ;
        double ctr=0 , N=0;
        REP(i,n) cin >> arr[i];

        REP(i,n){
            FOR(j,i+1,n-1){
                N++;
                if(__gcd(arr[i],arr[j])==1) ctr++;
            }
        }
        if(ctr){
            cout << fixed << setprecision(6) <<  sqrt(6*N/ctr) << endl;
        }else{
            cout << "No estimate for this data set." << endl;
        }
        cin >> n;
    }
    return 0;
}
