// https://codeforces.com/contest/385/problem/B
// B. Bear and Strings

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int len, ctr=0, lastB=0;

    len = s.length();

    for (int i = 0; i < len-3; ++i)
    {
        if( s[i] == 'b' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'r')
        {
            ctr += (i+1-lastB)*(len-(i+3));
            lastB = i + 1;
        }
    }

    cout << ctr;
}
