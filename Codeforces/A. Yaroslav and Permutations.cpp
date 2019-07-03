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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , x , maxi = 0;
    cin >> n ;
    int arr[1005];
    memset(arr,0,sizeof(arr));
    REP(i,n){
        cin >> x;
        arr[x]++;
        if(arr[x]>maxi) maxi = arr[x] ;
    }
    if(maxi>(n+1)/2) cout << "NO" ;
    else cout << "YES" ;

}
