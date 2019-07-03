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

    int w=0 , b=0;
    char arr[4][4];
    REP(i,4)REP(j,4)cin >> arr[i][j] ;

    REP(i,3){
        REP(j,3){
            w=0; b=0;
            if( arr[i][j]=='#') w++;
            else b++;

            if( arr[i][j+1]=='#') w++;
            else b++;

            if( arr[i+1][j]=='#') w++;
            else b++;

            if( arr[i+1][j+1]=='#') w++;
            else b++;

            if( w>=3 || b>=3){
                cout << "YES";
                return 0 ;
            }
        }
    }
    cout << "NO" ;
}
