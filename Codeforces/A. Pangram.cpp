#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  string all = "abcdefghijklmnopqurstvwxyz";
  for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<26 ;j++){
      if(s[i] == all[j] || s[i]+32 == all[j]){
        all[j] = '*';
      }
    }
  }
  if(all == "**************************"){
    cout << "YES";
  }else{
    cout << "NO" ;
  }
}
