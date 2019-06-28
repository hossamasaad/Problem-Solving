#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ll n,t;
    cin >> n >> t;
    if(t==10){
        if(n==1) cout << -1 ; 
        else{
            cout << 1 ;
            for(int i=1 ;i<n ;i++) cout << 0 ; 
        }
        return 0;
    }else{
        for(int i=0 ;i<n ;i++) cout << t ; 
    }
        
}
