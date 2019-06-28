#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    int n , xGoal=1;
    string x,y;
    
    cin >> n;
    string arr[n];
    cin >> arr[0];
    x = arr[0] ;
    for(int i=1 ;i<n ;i++){
        cin >> arr[i];
        if(x==arr[i]) xGoal++ ;
        else y = arr[i];
    } 
    
    if(xGoal>n/2) cout << x;
    else cout << y ;
}
