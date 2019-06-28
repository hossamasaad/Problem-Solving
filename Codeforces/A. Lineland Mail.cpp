#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n ;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++) cin >> arr[i] ;
    
    int mid = n/2 ;
    
    for(int i=0 ; i < mid ;i++){
        int mini , maxi ;
        if(i>0){
            mini = min( abs(arr[i]-arr[i+1]) , abs(arr[i]-arr[i-1]) );
            maxi = max( abs(arr[i]-arr[0]  ) , abs(arr[i]-arr[n-1]) );
        }else{
            mini = abs(arr[i]-arr[i+1]);
            maxi = abs(arr[i]-arr[n-1]);
        }
        cout << mini << ' ' << maxi << '\n' ;
    }
    
    for(int i=mid ; i < n ;i++){
        int mini,maxi;
        if(i==n-1){
            mini = abs(arr[i]-arr[i-1]);
            maxi = abs(arr[i]-arr[0]  );
        }else{
            mini = min( abs(arr[i]-arr[i+1]) , abs(arr[i]-arr[i-1]) );
            maxi = max( abs(arr[i]-arr[0]  ) , abs(arr[i]-arr[n-1]) );
        }
        cout << mini << ' ' << maxi << '\n' ;
    }
    return 0;
}
