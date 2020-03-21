// https://codeforces.com/problemset/problem/501/A
// A. Contest

#include <bits/stdc++.h>

using namespace std;

int main() {
    double p1,p2,t1,t2;
    cin >> p1 >> p2 >> t1 >> t2;

    double ans1 = max(3 * p1 / 10, p1 - p1 * t1 / 250);
    double ans2 = max(3 * p2 / 10, p2 - p2 * t2 / 250);

    if(ans1 == ans2) cout << "Tie";
    else if(ans1 > ans2) cout << "Misha";
    else cout << "Vasya";
}
