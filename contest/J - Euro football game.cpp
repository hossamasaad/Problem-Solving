// https://codeforces.com/contest/195/problem/A
// A. Let's Watch Football

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    double ans;
    cin >> a >> b >> c;

    if(b>=a){
        cout << 0;
        return 0;
    }

    ans = (double)(1- (double) b/a ) * a / b * c ;
    cout << ceil(ans);
}
