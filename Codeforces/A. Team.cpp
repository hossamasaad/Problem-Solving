#include <iostream>
using namespace std;

int main() {
  int n , p , v , t , total=0 , ctr=0;
  cin >> n;
  for(int i=0 ; i<n ; i++){
    cin >> v >> p >> t;
    total = p + v + t;
    if(total > 1) ctr++ ;
    total = 0;
  }
  cout << ctr ;
}
