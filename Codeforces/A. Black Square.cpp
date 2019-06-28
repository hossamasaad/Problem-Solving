#include <iostream>
using namespace std;

int main() {
  int arr[4];
  string s;
  int x , cals=0;
  for(int i=0; i<4 ; i++) cin >> arr[i];
  cin >> s;

  for(int i=0 ; i<s.length() ; i++){
    x= s[i] - 48;
    cals += arr[x-1];    
  }

  cout << cals;
}
