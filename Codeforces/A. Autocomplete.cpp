#include <bits/stdc++.h>
using namespace std;

bool sameStart(string s , string input){
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] != input[i]) return false ;
    }
    return true ;
}

int main() {

    string s;
    int n;
    cin >> s >> n;
    string words[n];
    for(int i=0 ; i<n ; i++) cin >> words[i] ;
    sort(words, words+n);
    for(int i=0 ; i<n ; i++){
        if(sameStart(s,words[i])){
            cout << words[i] ;
            return 0 ;
        }
    }
    cout << s ;
    return 0;
}
