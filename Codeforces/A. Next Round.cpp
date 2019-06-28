#include <iostream>
using namespace std;

int main() {
  int n=0 , x ,total=0, ctr=0 , ones=0 , twos=0 ,threes=0 , fours=0;
  cin >> n;
  for(int i=0 ; i<n ; i++){
    cin  >> x;
    if(x==4) fours++;
    else if(x==3) threes++;
    else if(x==2) twos++;
    else if(x==1) ones++;
  }

  ctr += fours ;
  if(threes >= ones){
    ctr += threes ;
    ones = 0;
  }else{
    ctr += threes;
    ones = ones - threes ;
  }

  if(twos%2 == 0){
     ctr += twos/2 ;
     twos = 0;
  }
  else{
     ctr += (twos-1)/2 ;
     twos = 1;
  }
  total = twos*2 + ones ;

  while(total > 0){
    total -= 4;
    ctr++;
  }

  cout << ctr ;
}
