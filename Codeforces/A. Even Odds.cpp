#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ll n,k;
    cin >> n >> k ;
    ll mid = (n+1)/2 ;
    if(k<=mid) cout << 2*k-1;
    else       cout << (k-mid)*2 ;
    return 0;
}
