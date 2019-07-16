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
#include <string>
#include <sstream>
#include <stdlib.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

template<typename T>
string itos(T i){
    stringstream s ;
    s << i ;
    return s.str() ;
}

int solve(string s){
    if(s.length()==1) return 0;
    int spell=0 , n=0;
    while(true){
        n = 0;
        REP(i,s.length()){
            n += s[i] - '0' ;
        }
        s = itos(n) ;
        spell++;
        if(s.length()==1) break;
    }
    return spell;
}

int main() {

    string s;
    cin >> s;
    cout << solve(s) ;
    return 0;
}
