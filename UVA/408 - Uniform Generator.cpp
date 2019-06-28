/*
 *  Author : Hossam Asaad
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
int step,mod;
int getSeed(int lastSeed){
    return (lastSeed+step)%mod;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(scanf("%d %d", &step, &mod) == 2){
        int arr[mod];
        int state = true ;
        memset(arr,0,sizeof(arr));
        FOR(i,1,mod-1) arr[i] = getSeed(arr[i-1]);
        sort(arr,arr+mod);
        REP(i,mod){
            if(arr[i]!=i){
                state = false ;
                break;
            }
        }
        printf("%10d%10d    %s\n\n", step, mod, state ? "Good Choice" : "Bad Choice");
    }
    return 0;
}
