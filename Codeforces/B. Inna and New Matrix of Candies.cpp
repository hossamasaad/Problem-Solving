#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    char grid[n][m];
    bool state = false;
    set <int> mySet;

    REP(i,n)
    {
        int s = 0,g = 0;
        REP(j,m)
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
