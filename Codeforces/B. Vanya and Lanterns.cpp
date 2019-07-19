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

    int n ,l;
    cin >> n >> l ;
    int a[n];
    REP(i,n) cin >> a[i];
    sort(a,a+n);
    double A = l -  a[n-1];
    double B = a[0];
    double maxi = 0 , dis;
    REP(i,n-1){
        dis = a[i+1] - a[i];
        if(dis>maxi) maxi = dis;
    }
    double C = maxi / 2 ;

    C = max(C,max(A,B));
    cout << fixed << setprecision(10) << C;
    return 0;
}
