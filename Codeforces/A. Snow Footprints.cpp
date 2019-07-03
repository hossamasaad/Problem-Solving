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
    char arr[n] ;
    REP(i,n) cin >> arr[i] ;

    int idxR = 0;
    int idxL = 0;

    REP(i,n){
        if(arr[i]=='R'){
            idxR = i + 1;
        }
        else if(arr[i]=='L' && idxR==0){
            cout << i+1 << " " << i ;
            return 0;
        }
        else if(arr[i]=='L'){
            cout << idxR << " " << i+1 ;
            return 0;
        }else if(arr[i]=='.' && idxR > 0 ){
            cout << idxR << " " << i+1 ;
            return 0;
        }
    }
    return 0;
}
