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
int getFaces(string x){
    if (x == "Tetrahedron" ) return 4 ;
    if (x == "Cube"        ) return 6 ;
    if (x == "Octahedron"  ) return 8 ;
    if (x == "Dodecahedron") return 12;
    if (x == "Icosahedron" ) return 20 ;
}

int main() {
    int n , sum = 0 ;
    string x ;
    cin >> n;
    REP(i,n){
        cin >> x;
        sum += getFaces(x);
    }
    cout << sum ;
    return 0;
}
