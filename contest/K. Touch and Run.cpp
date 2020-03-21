// https://codeforces.com/contest/152/problem/B
// B. Steps

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m,x,y,v,dx,dy,steps=0;
    cin >> n >> m >> x >> y >> v;

    for (int i = 0; i < v; ++i)
    {
        cin >> dx >> dy;
        long long c1 = 9999999999,c2 = 99999999999;

        if(dx>0) c1 = (n-x)/dx;
        else if(dx<0) c1 = (1-x)/dx;

        if(dy>0) c2 = (m-y)/dy;
        else if(dy<0) c2 = (1-y)/dy;

        x += dx * min(c1,c2);
        y += dy * min(c1,c2);

        steps += min(c1,c2);
    }
    cout << steps << '\n';
}
