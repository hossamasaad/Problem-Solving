#include <iostream>
using namespace std;

int main() {
  string str ;
  cin >> str;
  int lo=0 , up=0 ;
  for(int i=0 ; i< str.length() ;i++){
    if(str[i] > 'Z') lo++;
    else up++;
  }
  if(lo >= up){
    for(int i=0 ; i< str.length() ;i++){
     if(str[i] < 'a') str[i] += 32;
    }
  }else {
    for(int i=0 ; i< str.length() ;i++){
     if(str[i] > 'Z') str[i] -= 32;
    }
  }
  cout << str ;
}
