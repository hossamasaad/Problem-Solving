#include <iostream>
using namespace std;

int main() {
  int n=0;
  cin >> n ;
  int even = 0 , odd = 0 ;
  int arr[n];

  for(int i=0 ; i<n ; i++){
    cin >> arr[i];
    if(arr[i]%2 == 0){ even++;}
    else {odd++;}
  }

  if(odd == 1){
    for(int i=0 ; i<n ; i++){
      if(arr[i]%2 !=0){
         cout << i+1;
         return 0;
      }
    }
  }
  if(even == 1){
    for(int i=0 ; i<n ; i++){
      if(arr[i]%2 ==0){
        cout << i+1;
        return 0;
      }
    }
  }
}
