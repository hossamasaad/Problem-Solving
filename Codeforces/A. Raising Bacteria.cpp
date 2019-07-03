#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int neededBact = 0;
    int x = 0 ;
    cin >> x;
 
    while(x != 0){
        if(x%2 != 0){
            neededBact++;
        }
        x = x / 2 ;
    }
 
    cout << neededBact << endl;
    return 0;
}
