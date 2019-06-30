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
    int arr[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    vector<int> v(arr,arr+15);
    int x,y ;
    cin >> x >> y;
    int idx1 = lower_bound(v.begin(),v.end(),x)-v.begin();
    int idx2 = idx1 + 1;
    if(v[idx2] == y) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
