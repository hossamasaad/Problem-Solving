/*
 * Author : Hossam Asaad
 * Binary Search
 */

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

int t,n,c ;
int stalls[222222];

bool isMini(int distance){
    int currentVal = stalls[0] ,cows=1;
    FOR(i,1,n-1){
        if(stalls[i]-currentVal >= distance){
            cows++;
            currentVal = stalls[i] ;
        }
    }
    if(cows>=c) return true ;
    else return false ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(t--){
        cin >> n >> c;
        REP(i,n) cin >> stalls[i];
        sort(stalls,stalls+n);

        int mini=0 , maxi = stalls[n-1] , mid=0;
        while(mini<maxi-1){
            mid = mini + (maxi - mini)/2 ;
            if(isMini(mid)) mini = mid ;
            else maxi = mid-1 ;
        }
        if(isMini(maxi)) cout << maxi << endl;
        else cout << mini << endl;
    }
    return 0;
}
