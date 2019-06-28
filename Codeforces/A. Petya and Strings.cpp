#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string toLowerCase(string str){
  for(int i=0; i<str.length() ;i++){
    if(str[i] < 'a'){
      str[i] += 32 ;
    }
  }
  return str;
}

int main() {
  string fStr , sStr;
  cin >> fStr >> sStr;
  fStr = toLowerCase(fStr);
  sStr = toLowerCase(sStr);
  for(int i=0 ; i<fStr.length() ;i++){
    if(fStr[i] > sStr[i]){
      cout << 1 <<endl;
      return 0;
    } else if(fStr[i] < sStr[i]){
      cout << -1 <<endl;
      return 0;
    }
  }
  cout << 0 ;
}
