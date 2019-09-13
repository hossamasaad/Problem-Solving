#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)


int main() {
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,l,r,ctr = 0;
    cin >> n >> m;
    
    bool visited[m+1];
    memset(visited,false,sizeof(visited));
    visited[0] =  true;

    REP(i,n)
    {
        cin >> l >> r;
        FOR(j,l,r)
        {
            if(!visited[j])
            {
                visited[j] = true;
                ctr++;
            }
        }
    }

    cout << m - ctr << "\n";
    FOR(i,1,m)
    {
        if(!visited[i]) cout << i << " ";
    }
}
