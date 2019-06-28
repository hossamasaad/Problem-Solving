#include <iostream>
using namespace std;

int main() {
  int x = 0 , k ,ctr;
  string s;

  cin >> k;
  while(k--){
    cin >> s;
    if(s[1] == '+') x++;
    else x--;
  }

  cout << x ;
}
