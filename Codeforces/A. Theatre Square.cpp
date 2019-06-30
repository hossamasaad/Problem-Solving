/*
 * Author : Hossam Asaad
 */
#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long  n = 0 , m = 0 , a = 0;
    cin >> n >> m >> a ;
 
    long long x = 0 , y = 0 ;
 
    x = n / a ;  y = m / a ;
 
    if(n%a != 0) {x++;}
    if(m%a != 0) {y++;}
 
    cout << x * y << endl;
 
}
