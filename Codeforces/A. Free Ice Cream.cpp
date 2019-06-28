#include <iostream>
using namespace std;

int main() {
  int n=0 ;
  long long k=0 , ice=0 ;
  int ctr=0 ;
  char ope;
  cin >> n >> k;
  for(int i=0 ; i<n ; i++){
    cin >> ope >> ice ;
    if(ope == '+')k += ice ;
    else{
      if(k>=ice) k -= ice ; 
      else ctr++;
    }
  }

  cout << k <<" "<< ctr << endl;
}
