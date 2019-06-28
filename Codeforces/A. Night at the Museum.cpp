#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    string A = "abcdefghijklmnopqrstuvwxyz";
    string word ;
    cin >> word ;

    int position = 0;
    int x = 0;
    int y = 0;
    int sum = 0;

    for(int i=0;i<word.length();i++){
        int ch = A.find(word[i]);
        x = abs(position - ch);
        y = 26 -x;

        if(x < y)
        {
            sum = sum + x;
        }else{
            sum = sum + y;
        }
        position = ch;
    }
    cout<<sum<<endl;
    return 0;
}
