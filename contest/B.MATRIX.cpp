// https://codeforces.com/problemset/problem/400/B
// B. Inna and New Matrix of Candies


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    char grid[n][m];
    bool state = false;
    set <int> mySet;

    for (int i = 0; i < n; ++i)
    {
        int s = 0,g = 0;
        for (int j = 0; j < m; ++j)
        {
            cin >> grid[i][j];
            if( grid[i][j] == 'S') s = j;
            if( grid[i][j] == 'G') g = j;
        }
        mySet.insert(s-g);
        if(s<g) state = true;
    }

    if(state) cout << -1 << "\n";
    else cout << mySet.size() << "\n";
}
