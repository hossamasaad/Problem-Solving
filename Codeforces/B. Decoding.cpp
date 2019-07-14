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
 
string solve(int n,string s){
    string result;
    int i = 0;
    while(n--){
        if(n%2!=0){
            result = s[i] + result;
        }
        else{
            result = result + s[i];
        }
        i++;
    }
    return result ;
}
int main() {
    int n ;
    string s;
    cin >> n >> s;
    cout << solve(n,s);
    return 0;
}
