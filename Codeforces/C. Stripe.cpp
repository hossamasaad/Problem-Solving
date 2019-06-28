#include <iostream>
using namespace std;

int main() {
    
    int n ,ctr=0;
    cin >> n;
    int arr[250000];
    
    for(int i=0 ; i<n ; i++){
        cin >> arr[i+1];
        arr[i+1] += arr[i];
    }
    
    for(int i=1 ; i<n ; i++){
        if(arr[i]==arr[n]-arr[i]) ctr++;
    }
    
    cout << ctr << endl;
    
    return 0;
}
