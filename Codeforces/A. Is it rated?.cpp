#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n],y[n];
    for(int i=0 ; i<n ; i++){
        cin >> x[i] >> y[i];
        if(x[i]!=y[i]){
            cout << "rated" ;
            return 0;
        }
    }
    sort(x,x+n);
    for(int i=0,j=n-1 ; i<n ; i++,j--){
        if(x[i]!=y[j]){
            cout << "unrated" ;
            return 0;
        }
    }
    cout << "maybe" ;
}
