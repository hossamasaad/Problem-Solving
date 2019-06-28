#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    string a,b ;
    cin >> a >> b ;
    if(a!=b) cout << max(a.length(),b.length());
    else cout << -1 ;
    return 0;
}
