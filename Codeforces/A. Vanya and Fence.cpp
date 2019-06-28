#include <iostream>
using namespace std;

int main() {
  int n , h , x , width=0;
  cin >> n >> h;

  for(int i=0 ; i<n ; i++){
    cin >> x ;
    if(x>h) width += 2 ;
    else width++;
  }
  cout << width ;
}
