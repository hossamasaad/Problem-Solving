#include <bits/stdc++.h>

using namespace std;

int dx[8] = {1,1,-1,-1,2,2,-2,-2};
int dy[8] = {2,-2,2,-2,1,-1,1,-1};

int dis[10][10];

bool isValid(int x, int y)
{
    if( x >=0 && y >= 0 && x < 8 && y < 8 ) return true;
    return false;
}

int bfs(int a,int b,int x ,int y)
{
    memset( dis , -1 , sizeof(dis) );
    queue<int> q1,q2;
    q1.push(a); q2.push(b);
    dis[a][b] = 0;

    while(!q1.empty())
    {
        int f = q1.front();
        int s = q2.front();
        
        q1.pop(); q2.pop();
        if(f==x && s==y) return dis[f][s];

        for(int i=0;i<8;i++)
        {
            int xx = f + dx[i];
            int yy = s + dy[i];

            if(!isValid(xx, yy)) continue;
            if(dis[xx][yy] == -1)
            {
                dis[xx][yy] = dis[f][s] + 1;
                q1.push(xx); q2.push(yy);
            }
        }
    }
    return -1;
}

int main()
{
    string from,to;
    while(cin >> from >> to)
    {
        int ans = bfs( from[0]-'a' , from[1]-'1', to[0]-'a' , to[1]-'1' );
        cout << "To get from " << from << " to " << to << " takes " << ans << " knight moves.\n";
    }
}
