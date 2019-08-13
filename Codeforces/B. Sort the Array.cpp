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

#define ll long long int
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,f=0,s=0;
    int a[100005] ,b[100005];
    cin >> n;
    REP(i,n){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b,b+n);

    REP(i,n){
        if(a[i]!=b[i]){
            f = i;
            break;
        }
    }

    FORD(i,n-1,0){
        if(a[i]!=b[i]){
            s = i;
            break;
        }
    }

    reverse(a+f,a+s+1);
    REP(i,n){
        if(a[i]!=b[i]){
            cout << "no";
            return 0;
        }
    }
    cout << "yes" << endl;
    cout << f+1 << " " << s+1 ;
    return 0;
}
