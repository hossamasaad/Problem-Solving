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

    int n , k;
    cin >> n >> k;
    int arr[n+1];
    arr[0] = 0;

    int f=1,j=1,mini=0,sum=0;
    FOR(i,1,n){
        cin >> arr[i];
        if(i>k){
            sum += arr[i];
            sum -= arr[f];
            f++;
            if(mini>sum){
                mini = sum;
                j = i - k + 1;
            }
        }else{
            sum += arr[i];
            mini = sum;
        }
    }
    cout << j;
    return 0;
}
