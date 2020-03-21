// https://codeforces.com/problemset/problem/705/A
// A. Hulk

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    for (int i = 1; i <= n ; ++i)
    {
        if(i == n){
            if(i&1) cout << "I hate it";
            else cout << "I love it";
        }
        else{
            if(i&1) cout << "I hate that ";
            else cout << "I love that ";
        }
    }
    return 0;
}
