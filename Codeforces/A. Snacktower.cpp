#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n , x ,t;
    cin >> n ;
    t=n;
    bool arr[2222222];

    for(int i=0 ; i<n ;i++){
        cin >> x;
        arr[x] = true;
        while( arr[t] && t>0){
            cout << t << " ";
            t--;
        }
        cout << endl;
    }
    return 0;
}
