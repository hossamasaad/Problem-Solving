#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n ,ctr=0;
    bool isLess ,isMore ;
    cin >> n ;
    if(n==1){
        cout << 0 ;
        return 0;
    }
    int arr[n];
    for(int i=0 ; i<n ; i++) cin >> arr[i] ;
    sort(arr,arr+n);
    int mini = arr[0];
    int maxi = arr[n-1];

    for(int i=1 ; i<n-1 ; i++){
       if(arr[i]>mini && arr[i]<maxi) continue;
       else ctr++;
    }
    cout << n-ctr-2;
    return 0;
}
