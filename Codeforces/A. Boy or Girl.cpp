#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
  string str ;
  cin >> str ;
  set<char> mySet;
  for(int i=0 ; i < str.length() ; i++){
    mySet.insert(str[i]);
  }
  
  if(mySet.size() % 2 == 0) cout << "CHAT WITH HER!";
  else cout << "IGNORE HIM!";
}
