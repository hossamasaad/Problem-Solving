// https://codeforces.com/problemset/problem/248/A
// A. Cupboards

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int l = 0, r = 0;

    int x,y;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        if(x == 0) l++;
        if(y == 0) r++;
    }

    int ans = min(l,n-l) + min(r,n-r);
    cout << ans;
}
