#include <bits/stdc++.h> 
using namespace std;

int main() {
  int n , w = 0;
  cin >> n;
  int arr[n];

  for(int i=0 ; i<n ; i++) cin >> arr[i];
  sort(arr , arr+n);
  for(int i=n-1 ; i>=0 ; --i){
    int s = 0;
    w += arr[i] ;
    for(int j=0 ; j < i ;j++){
      s += arr[j] ;
    }
    if(w > s){
      cout << n-i ;
      return 0 ;
     } 
  }
}
