#include <iostream>
using namespace std;

int main() {
  int ctr=0 ;
  string s ;
  string chars = "abcdefghijklmnopqrstuvwxyz";
  getline(cin, s);
  for(int i=0 ; i<s.length() ;i++){
    for(int j=0 ; j<26 ; j++){
      if(s[i]==chars[j]){
        chars[j] = '#' ;
        ctr++;
        break ;
      }
    }
  }

  cout << ctr <<endl;
}
