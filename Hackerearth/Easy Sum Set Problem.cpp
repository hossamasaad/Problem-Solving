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
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;

    cin >> n;
    vector<int> A(n);
    REP(i,n) cin >> A[i];

    cin >> m;
    vector<int> C(m);
    REP(i,m) cin >> C[i];

    sort(C.begin(),C.end());
    int len = C.size() - 1;
    bool found = false;
    FOR(i,1,C[len]){          // 1 2 3 4 5
        REP(j,n){          // 1 2
            found = false; // 3 4 5
            REP(k,m){
                if(i+A[j]==C[k]){
                    found = true;
                    break;
                }
            }
            if(!found) break;
        }
        if(found) cout << i << " ";
    }
}
