#include <iostream>
using namespace std;
 
#define ll long long 
ll sum(ll n){
    return (n*(n+1))/2 ;
}
 
ll sum(ll s , ll e){
    if(s<=1) return sum(e);
    return sum(e) - sum(s-1) ;
}
 
ll getMinimumSplitter(ll n , ll k){
    ll start=1 , end=k;
    while(start < end){
        ll mid = (start + end)/2 ;
        ll s = sum(mid,k) ;
        
        if(s == n) return k - mid + 1;
        else if(s >  n) start = mid + 1;
        else end = mid ;
        
    }
    return k - start + 2 ;
}
int main() {
    
    ll n,k;
    cin >> n >> k ;
    if(n==1){
        cout << 0 << "\n" ;
    }else if(n<=k){
        cout << 1 << "\n" ;
    }else{
        n-- ;
        k-- ;
        if(sum(k)<n)
            cout << -1 << "\n" ;
        else
            cout << getMinimumSplitter(n,k) << '\n' ;
    }
    return 0;
}
