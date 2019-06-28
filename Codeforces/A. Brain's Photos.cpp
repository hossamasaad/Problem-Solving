#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    int n,m;
    string x;
    bool isColored=false;
    cin >> n >> m ;
    for(int i=0 ; i<n ;i++){
        for(int j=0 ; j<m ;j++){
            cin >> x ;
            if(x=="C" || x=="M" || x=="Y"){
                isColored = true ;
            }
        }
    }
    if(isColored) cout << "#Color" ;
    else cout << "#Black&White" ;
}
