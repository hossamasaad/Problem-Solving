#include <iostream>
using namespace std;

int main() {
  int n ,ctr=0;
  string s;
  cin >> n  >> s;
  for(int i=0 ; i<n-1 ; i++){
    if(s[i]==s[i+1]) ctr++;
  }
  cout << ctr;
}
