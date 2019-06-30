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
bool checkArray(char arr[305][305],int n){
    char x = arr[0][1];
    if(x==arr[0][0]) return false ;
    REP(i,n){
        REP(j,n){
            if(i==j || i+j == n-1) continue;
            if(arr[i][j]!=x) return false;
        }
    }
    return true ;
}
bool checkSecondDiagonal(char arr[305][305],int n){
    char x = arr[n/2][n/2];
    for(int i=0,j=n-1 ; i<n ;i++,j--){
        if(arr[i][j]!=x)
            return false;
    }
    return true;
}
bool checkMainDiagonal(char arr[305][305],int n){

    char x = arr[n/2][n/2];
    REP(i,n){
        if(arr[i][i]!=x)
            return false;
    }
    return true;
}
int main() {
    int n ;
    cin >> n;
    char arr[305][305];
    REP(i,n){
        REP(j,n){
            cin >> arr[i][j];
        }
    }
    if(checkSecondDiagonal(arr,n) && checkMainDiagonal(arr,n) && checkArray(arr,n))
        cout << "YES" ;
    else cout << "NO" ;

    return 0;
}
