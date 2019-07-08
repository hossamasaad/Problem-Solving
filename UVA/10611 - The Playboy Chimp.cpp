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

    int n;
    cin >> n;
    vector <int> ladies(n);
    REP(i,n) cin >> ladies[i];

    int q ;
    cin>>q;
    vector<int> quries(q);
    REP(i,q) cin >> quries[i];

    REP(i,q){
        int x = upper_bound(ladies.begin(),ladies.end(),quries[i])-ladies.begin();
        int y = lower_bound(ladies.begin(),ladies.end(),quries[i])-ladies.begin();

        if(quries[i]<=ladies[y-1] || y==0) cout << "X" << " ";
        else cout << ladies[y-1]<< " ";

        if(quries[i]>=ladies[n-1]) cout << "X" << endl;
        else cout << ladies[x] << endl;

    }


    return 0;
}
