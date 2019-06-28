#include <iostream>
using namespace std;

int main() {
   string pass = "";
   string s = "abcdefghijklmnopqrstvuwxyz";
   int n , k;
   cin >> n >> k;

   while(true){
    for(int i=0 ; i<k ; i++){
      pass.push_back(s[i]);
      if(pass.length() == n){
        cout << pass ;
        return 0;
      } 
    }
   }
}
