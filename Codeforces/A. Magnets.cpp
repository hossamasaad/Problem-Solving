#include <iostream>
using namespace std;

int main() {
  int n , x , k , ctr=0 ;
  cin >> n ;
  
  for(int i=0 ; i<n ; i++){
    cin >> x ;
    if(x!=k){
      ctr++;
      k = x;
    }
  }
  cout << ctr ;
}
