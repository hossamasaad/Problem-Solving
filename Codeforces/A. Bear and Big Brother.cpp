#include <iostream>
using namespace std;

int main() {
  int a , b , k=0 ;
  cin >> a >> b;

  while(a<=b){
    k++;
    a *= 3;
    b *= 2;
  }

  cout << k ;
}
