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

    int n,k,l ;
    cin >> n >> k;
    int arr[n*2+1];
    REP(i,2*n+1) cin >> arr[i] ;
    l = 2*n-1 ;
    while(k>0){
        if( arr[l] > arr[l-1]+1 && arr[l]>arr[l+1]+1){
            arr[l]--;
            k--;
        }
        l -= 2 ;
    }
    REP(i,2*n+1) cout <<  arr[i] << ' ' ;
}
