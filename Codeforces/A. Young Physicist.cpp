#include <iostream>
#include <string>
using namespace std;

int main() {
  int n , x=0 , y=0 , z=0 ;
  cin >> n ;
  int arr[n][3];

  for(int i=0 ; i<n ; i++){
    cin >> arr[i][0] >> arr[i][1] >> arr[i][2] ;
    x += arr[i][0];
    y += arr[i][1];
    z += arr[i][2];
  }

  if(x==0 && y==0 && z==0){
    cout << "YES" ;
  }else{
    cout << "NO" ;
  }

}
