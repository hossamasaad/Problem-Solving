#include <iostream>
using namespace std;

int main() {
  string s ;
  string r ;
  cin >> s ;

  int ones=0 , twos=0 , threes=0;
  for(int i=0 ; i<s.length() ; i++){
    if(s[i] == '1') ones++;
    else if(s[i] == '2') twos++;
    else if(s[i] == '3') threes++;
  }
  for(int i=0 ; i < ones ; i++){
    if(r.length() != 0) r.push_back('+');
    r.push_back('1');
  
  }
  for(int i=0 ; i < twos ; i++){
    if(r.length() != 0) r.push_back('+');
    r.push_back('2');
  }
  for(int i=0 ; i < threes ; i++){
    if(r.length() != 0) r.push_back('+');
    r.push_back('3');
  }
  
  cout << r ;
}
