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

    int r=0 , l=0;
    string right , left , w , x ;
    cin >> x >> w;

    REP(i,x.length()){
        if(x[i]=='|')break;
        l++;
    }

    r = x.length()-1-l;
    left = x.substr(0,l);
    right= x.substr(l+1,r);

    REP(i,w.length()){
        if(left.length() < right.length()) left += w[i] ;
        else right += w[i];
    }

    if(right.length()==left.length()) cout << left << "|" << right ;
    else cout << "Impossible" ;

}
