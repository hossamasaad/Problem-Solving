/*
 * Author : Hossam Asaad
 */
#include <bits/stdc++.h>
 
#define ll long long
using namespace std;
const ll modulo = 1000000007;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n,x,ctr=0;
    cin >> n;
 
    ll arr[100005];
    memset(arr,0,sizeof(arr));
 
    for(ll i=0;i<n;i++){
        cin >> x;
        arr[x]++;
        if(arr[x]>1) ctr += arr[x] -  1;
    }
 
    cout << ctr;
    return 0;
}
