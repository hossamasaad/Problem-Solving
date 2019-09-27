#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;
string s;
int n,m,x,q,ctr=0;
char grid[35][35];
bool canTouch[150];
bool found[150];

vector< pair<int,int> > shift;

void func(int a,int b)
{
    REP(i,n)REP(j,m)
    {
        if( sqrt( pow(a-i,2) + pow(b-j,2) ) <= x )
        {
            if( grid[i][j]>='a') canTouch[ grid[i][j] - 32 ] = true;
            else canTouch[ grid[i][j] + 32 ] = true;
        }

        if( grid[i][j]>='a') found[ grid[i][j] - 32 ] = true;
        else found[ grid[i][j] + 32 ] = true; 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(canTouch, false, sizeof(canTouch));
    memset(found, false, sizeof(found));

    cin >> n >> m >> x;
    REP(i,n)REP(j,m)
    {
        cin >> grid[i][j];
        if(grid[i][j] == 'S') shift.push_back( make_pair(i,j) );
        else
        {
            canTouch[ grid[i][j] ] = true;
            found[ grid[i][j] ] = true;
        }
    }

    cin >> q >> s;

    REP(i,shift.size())
    {
        int a = shift[i].first;
        int b = shift[i].second;
        func(a,b);
    }

    REP(i,q)
    {
        if( !found[ s[i] ] )
        {
            cout << -1;
            return 0;
        }
        else if( !canTouch[ s[i] ] ) ctr++;
    }

    cout << ctr;
    return 0;
}
