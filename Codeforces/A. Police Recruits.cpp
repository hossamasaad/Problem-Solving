#include <iostream>
using namespace std;

int main() {
  int n , noo=0 , noc=0 , x , ctr=0;
  cin >> n;
  for(int i=0 ; i<n ; i++){
    cin >> x;
    if(x>0) noo+=x;
    else{
      if(noo>0) noo--;
      else ctr++;
    }
  }
  cout << ctr ;
}
