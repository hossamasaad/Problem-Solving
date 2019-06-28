#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int x ;
  int a=0;
  int b=0;
  for(int i=0 ; i<5 ; i++){
    for(int j=0 ; j<5 ; j++){
      cin >> x;
      if(x==1){
        a=i ; b=j ;
      }
    }
  }
  cout << abs(2-a)+abs(2-b);
}
