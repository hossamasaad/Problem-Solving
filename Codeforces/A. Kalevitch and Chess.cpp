#include <iostream>
using namespace std;

int main() {
  int black=0 , result=0 , ctr=0;
  char c ;


  for(int i=0 ; i<8 ;i++){
    for(int i=0 ; i<8 ;i++){
      cin >> c;
      if( c == 'B') black++;
    }
    if(black==8) result++; 
    else if(black > ctr){
      result += black;
      ctr = black ;
    }
    black = 0;
  }

  cout << result ;
}
