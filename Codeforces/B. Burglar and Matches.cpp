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
 
    int n,m,a,b;
    vector< pair<int,int> > v;
    cin >> n >> m;
    REP(i,m){    
        cin >> a >> b ;
        v.push_back( make_pair(b,a) );
    }
    sort(v.begin(),v.end());
 
    int maxi = 0;
    int i = m - 1; 
    while(n){
        if(n > v[i].second){
            n -= v[i].second;
            maxi += v[i].first * v[i].second ;
            v.pop_back();
        }else{
            maxi += v[i].first * n ;
            break;
        }
        i--;
        if(i<0) break ;
    }
    cout << maxi ;
    return 0;
}
