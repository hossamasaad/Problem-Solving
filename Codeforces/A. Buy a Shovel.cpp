#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    int price=0;
    int change=0;
    int num=1;

    cin>>price>>change;

    while(true){
        if(num*price%10 == 0 || (num*price-change)%10 == 0){
            cout<<num<<endl;
            break;
        }
        num++;
    }
}
