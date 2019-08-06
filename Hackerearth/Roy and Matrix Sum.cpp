/*
 * Author : Hossam Asaad
 */
#include <iostream>
#include <math.h>
#include <cmath>
 
#define ll long long
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll sum=0;
        ll len = n;
        for(ll i=0;i<len;i++){
            sum += i * n;
            n--;
        }
        cout << sum*2 << endl;
    }
    return 0;
}
