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

int main() {

    string s ;
    int A=0,B=0,C=0;

    REP(i,3){
        cin >> s;
        if(s[1]=='>'){
            if(s[0]=='A') A++;
            else if(s[0]=='B') B++;
            else if(s[0]=='C') C++;
        }
        else if(s[1]=='<'){
            if(s[2]=='A') A++;
            else if(s[2]=='B') B++;
            else if(s[2]=='C') C++;
        }
    }
    if(A==B || B==C || A==C) cout << "Impossible" ;
    else{
        vector< pair<int,char> > v;
        v.push_back( make_pair(A,'A') );
        v.push_back( make_pair(B,'B') );
        v.push_back( make_pair(C,'C') );
        sort(v.begin(),v.end());
        cout << v[0].second << v[1].second << v[2].second ;
    }
    return 0;
}
