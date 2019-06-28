#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    
    int n , d;
    cin >> n >> d;
    int arr[n];
    
    for(int i=0 ; i<n ; i++) cin >> arr[i] ;
    
    int ctr=0;
    int dmin=0;
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==j) continue;
            dmin =  abs(arr[i] - arr[j]) ;
            if(dmin <= d) ctr++;
        }
    }
    
    cout << ctr << endl;
    
    return 0;
}
