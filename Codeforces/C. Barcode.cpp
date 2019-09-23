#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

int n,m,x,y;
char input;

int d[1005];
int mem[1009][3][1009];

int func(int i, int last, int wid)
{
    if(i==m)
    {
        if( wid<x || wid>y ) return 1e9;
        return 0;
    }

    if( mem[i][last][wid] != -1) return mem[i][last][wid];

    int dots = 1e9;
    if(i == 0) dots = n - d[i] + func(i+1,0,1);
    else if(last == 0 && wid < y) dots = n - d[i] + func(i+1,0,wid+1);
    else if(last == 1 && wid >= x) dots = n - d[i] + func(i+1,0,1);

    int hashs = 1e9;
    if(i == 0) hashs = d[i] + func(i+1,1,1);
    else if(last == 1 && wid < y) hashs = d[i] + func(i+1,1,wid+1);
    else if(last == 0 && wid >= x) hashs = d[i] + func(i+1,1,1);

    return mem[i][last][wid] = min(dots,hashs);
}

int main()
{
    cin >> n >> m >> x >> y;
    memset(d,0,sizeof(d));
    memset(mem,-1,sizeof(mem));

    REP(i,n)REP(j,m)
    {
        cin >> input;
        if(input == '.') d[j]++;
    }

    cout << func(0,2,0);
}
