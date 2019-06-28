#include <iostream>
using namespace std ;

int main() {
  int n , b , d , x , ctr=0 , was=0;
  cin >> n >> b >> d;
  for(int i=0 ; i<n ; i++){
    cin >> x;
    if(x>b) continue ;
    was += x;
    if(was>d){
      ctr++;
      was=0;
    }
  }
  cout << ctr ;
}
