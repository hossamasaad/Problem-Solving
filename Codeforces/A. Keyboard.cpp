#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

char getLeft(char s){
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i=0 ; keyboard.length() ; i++){
        if(s==keyboard[i])
            return keyboard[i-1];
    }
}

char getRight(char s){
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i=0 ; keyboard.length() ; i++){
        if(s==keyboard[i])
            return keyboard[i+1];
    }
}

int main() {
    string shift , s , keyboard ;
    cin >> shift;
    cin >> s ;

    if(shift=="R")
        for(int i=0 ; i<s.length() ;i++)
            cout << getLeft(s[i]) ;
    else
        for(int i=0 ; i<s.length() ;i++)
            cout << getRight(s[i]) ;

}
