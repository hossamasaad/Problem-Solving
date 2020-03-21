// https://codeforces.com/contest/714/problem/B
// B. Filya and Homework

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,x;
    set <int> v;
    set <int> ::iterator it;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        v.insert(x);
    }

    if(v.size()>3) cout << "NO";
    else if(v.size()<3) cout << "YES";
    else {
        int x,y,z;

        it = v.begin();
        x = *it; it++;
        y = *it; it++;
        z = *it;

        if( y-x == z-y ) cout << "YES";
        else cout << "NO";
    }

}
