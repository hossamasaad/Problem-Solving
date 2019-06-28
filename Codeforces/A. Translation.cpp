#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    string a,b;
    cin >> a >> b ;
    for(int i=0,j=a.length()-1 ; i<a.length() ; i++,j--){
        if(a[i]!=b[j]){
            cout << "NO" ;
            return 0;
        }
    }
    cout << "YES" ;
}
