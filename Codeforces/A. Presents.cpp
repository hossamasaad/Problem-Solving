#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n ;
    cin >> n ;
    int arr[105];
    
    for(int i=1 ; i<=n ; i++){
        cin >> arr[i];
    }
    for(int i=1 ; i<=n ; i++){
        for(int j=0 ;j<=n ; j++){
            if(i == arr[j]){
                cout << j << " " ;
            }
        }
    }
    return 0;
}
