#include <iostream>
#include <algorithm>
#include <string>
#define ll long long
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int i=0;
    while(i<n){
        if( (s[i]=='1' && s[i+1]=='0' ) || ( s[i]=='0' && s[i+1] == '1' ) ){
            s.erase(i,2);
            n -= 2;
            i -= 1;
        }else{
            i++;
        }
    }
    cout << s.length() ;
}
