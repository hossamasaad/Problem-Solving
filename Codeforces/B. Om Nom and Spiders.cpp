#include <bits/stdc++.h>
 
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
 
using namespace std;
 
int main() {
 
    int n,m,k;
    cin >> n >> m >> k;
 
    char grid[n][m];
    REP(i,n)REP(j,m) cin >> grid[i][j]; 
    
    REP(j,m)
    {
        int ctr = 0;
        REP(i,n)
        {
            if( j+i<m  && grid[i][j+i]=='L') ctr++;
            if( j-i>=0 && grid[i][j-i]=='R') ctr++;
            if( grid[i][j] == 'U' ) ctr += !(i&1);
        }
        cout << ctr << " ";
    }
    return 0;
}
