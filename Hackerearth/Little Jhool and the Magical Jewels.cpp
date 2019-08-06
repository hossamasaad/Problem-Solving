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
        ll r=0,u=0,b=0,y=0;
        string s;
        cin >> s;
        ll len = s.length();
        for(ll i=0;i<len;i++){
            if(s[i]=='r') r++;
            else if(s[i]=='u') u++;
            else if(s[i]=='b') b++;
            else if(s[i]=='y') y++;
        }
        cout << min( r , min(u , min(b,y) ) ) << endl;
    }
    return 0;
}
