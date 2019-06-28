#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n ;
  int spd[n] , ram[n] , hdd[n] , cost[n] ;
  bool state[n];
  for(int i=0 ; i<n ; i++) cin >> spd[i] >> ram[i] >> hdd[i] >> cost[i] ;

  for(int i=0; i<n; i++){
	  state[i]=false;
  }
  for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
      if(i==j) continue;
      if(spd[i]<spd[j] && ram[i]<ram[j] && hdd[i]<hdd[j]){
        state[i] = true;
        break;
      }
    }
  }

  int price = 100000000;
  int index = 0;
  for(int i=0 ; i<n ; i++){
    if(state[i] != true && cost[i] < price  ){
        price =  cost[i];
        index = i ;      
    }
  }

  cout << index + 1 ;
}
