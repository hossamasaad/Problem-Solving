#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

// moves of the king
int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };

set< pair<int,int> > points;        // store points
map< pair<int,int> , int  > dis;    // distance of each pair
queue< pair< int,int > > q;         // to store pair levels
int n,x,y,xx,yy,r,a,b;

int main()
{
    cin >> x >> y >> xx >> yy >> n; // input data
    
    // get points can move on
    REP(i,n)
    {
        cin >> r >> a >>  b;
        FOR(i,a,b) points.insert( make_pair(r,i) ); 
    }

    // store place
    pair<int,int> qp = make_pair(x,y); 
    q.push(qp);
    dis[qp] = 0;

    // BFS
    while(!q.empty())
    {
        qp = q.front(); q.pop();

        if(qp.first == xx && qp.second == yy){
            cout << dis[qp] << "\n";
            return 0;
        }

        REP(i,8)
        {
            pair <int,int> pp = make_pair(qp.first+dx[i],qp.second+dy[i]);
            
            // if points not found or visited
            if( !points.count(pp) || dis.count(pp) ) continue;
            q.push(pp);
            dis[pp] = dis[qp] + 1;

        }
    }    
    cout << -1 << endl;
}
