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

#define ll long long int
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)

using namespace std;

ll n,m;
ll arr[1005][1005];

void make(){
    REP(i,n+1){
        REP(j,n+1){
            if(i==0 || j==0) arr[i][j] = 0;
            else arr[i][j] += arr[i-1][j];
        }
    }
    REP(i,n+1){
        REP(j,n+1){
            if(i==0 || j==0) continue;
            else{
                arr[i][j] += arr[i][j-1];
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool w = false;
    while(cin >> n >> m){
        if(w){
            cout << endl;
        }
        w = true;
        FOR(i,1,n)
        FOR(j,1,n)
            cin >> arr[i][j];

        make();
        int k , l;
        ll x,sum = 0;
        FOR(i,m,n){
            FOR(j,m,n){
                k = i - m;
                l = j - m;
                if(k==0&&l==0){
                    x = arr[i][j];
                    sum += x;
                    cout << x << endl;
                }
                else if(k==0){
                    x = arr[i][j] - arr[i][l];
                    sum  += x;
                    cout << x << endl;
                }
                else if(l==0){
                    x = arr[i][j] - arr[k][j];
                    sum += x;
                    cout << x << endl;
                }
                else{
                    x = arr[i][j] - arr[k][j] - arr[i][l] + arr[k][l];
                    sum += x;
                    cout << x << endl;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
