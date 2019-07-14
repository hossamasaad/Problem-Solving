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

    int n,a,ctr=0;
    cin >> n >> a;
    a--;
    int arr[n];
    REP(i,n) cin >> arr[i];

    REP(i,n){
        if( a-i < 0 && a+i < n && arr[a+i]){
            ctr++;
        }
        else if( a+i > n-1 && a-i >= 0 && arr[a-i]){
            ctr++;
        }
        else if( a+i<n && a-i >=0 && arr[a-i] && arr[a+i]){
            if(i==0) ctr++;
            else ctr += 2;
        }
    }
    cout << ctr ;
    return 0;
}
