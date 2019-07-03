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

    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    int arr[n];
    REP(i,n) cin >> arr[i] ;
    int mini = INT_MAX;
    REP(i,s.length()-1){
        if(s[i]=='R' && s[i+1]=='L' ){
            mini = min( mini , (arr[i+1]-arr[i])/2 );
        }
    }
    if(mini!=INT_MAX) cout << mini ;
    else cout << -1 ;

}

