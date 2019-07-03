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
    int n , x ,y ;
    cin >> n ;

    vector< pair<int,int> > vec ;

    REP(i,n){
        cin >> x >> y ;
        vec.push_back( make_pair(x,y) );
    }

    sort(vec.begin(),vec.end());

    REP(i,n-1){
        if(vec[i].second>vec[i+1].second){
            cout << "Happy Alex" ;
            return 0 ;
        }
    }
    cout << "Poor Alex" ;
    return 0;
}
