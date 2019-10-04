#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t ;
    cin >> t;
 
    while(t--){
        int X , n ,sum;
        bool state = false;
        cin >> X >> n ;
        int l[n];
        for(int i=0 ; i<n ; i++) cin >> l[i];
        for(int i=0 ; i< (1<<n) ; i++){
            sum=0;
            for(int j=0 ; j<n ;j++){
                if(i & (1<<j)){
                    sum += l[j] ;
                }
            }
            if(sum == X){
                state = true;
                break;
            }
        }
 
        if(state) cout << "YES" << endl;
        else cout << "NO" << endl;
 
    }
 
 
    return 0;
}
