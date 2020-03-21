// https://codeforces.com/problemset/problem/147/A
// A. Punctuation

#include <bits/stdc++.h>

using namespace std;

int main() {

    string s; getline(cin,s);

    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]==' '){
            if(s[i+1] == ' ' || s[i+1] == ',' || s[i+1] == '!' || s[i+1] == '?' || s[i+1] == '.' ) continue;
            else cout << s[i];
        }
        else if( s[i] == ',' || s[i] == '!' || s[i] == '?' || s[i] == '.' ){
            if(s[i+1] == ' ') cout << s[i];
            else cout << s[i] << ' ';
        }
        else cout << s[i];
    }
    return 0;
}
