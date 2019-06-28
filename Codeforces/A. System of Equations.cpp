#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
  int ctr=0 ; 
  int n , m ;
  int a=0 , b=0 ;
  int result1=0 , result2=0 ;
  cin >> n >> m ;
  for(int i=0; i<=max(n,m) ; i++){
    for(int j=0; j<=max(n,m) ; j++){
      result1 = pow(i,2) + j;
      if(result1 == n){
        result2 = pow(j,2) + i;
        if(result2 == m){
          ctr++;
        }
      }
    }
  }
  cout << ctr;
}
