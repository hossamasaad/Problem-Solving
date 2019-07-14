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

    int n , ctr , maxCtr=0;
    cin >> n ;
    int arr[1005];
    arr[0] = 1005;
    arr[n+1] = 1005;
    FOR(i,1,n) cin >> arr[i] ;
    FOR(i,1,n){
        ctr = 1;
        FOR(j,i+1,n){
            if(arr[j-1]>=arr[j]){
                ctr++;
            }else{
                break;
            }
        }
        FORD(j,i-1,0){
            if(arr[j+1]>=arr[j]){
                ctr++;
            }else{
                break;
            }
        }

        maxCtr = max(maxCtr,ctr);
    }

    cout << maxCtr;
    return 0;
}
