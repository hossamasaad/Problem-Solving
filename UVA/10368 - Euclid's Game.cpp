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

int func(int x,int y){
    if(!y) return 0;
    if(x/y > 1) return 1;

    return func(y,x-y) + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x,y;
    while(cin>>x>>y){

        if(x==0&&y==0)
            break;
        if(x<y)
            swap(x,y);

        int ctr = func(x,y);

        if(ctr&1)
            cout << "Stan wins" << endl;
        else
            cout << "Ollie wins" << endl;
    }
    return 0;
}
