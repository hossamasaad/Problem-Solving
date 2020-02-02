#include <bits/stdc++.h>

using namespace std;

char graph[1000][1000];
bool visited[1000][1000];
vector<string> path;
int n,m;
int x,y;
int way = 0;
int dx[3] = {0,0,-1};
int dy[3] = {-1,1,0};


void input()
{  
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> graph[i][j];
            if(graph[i][j]=='@')
            {
                x = i;
                y = j;
            }
        }
    }
}

void dfs(int i,int j)
{
    if( i<0 || j<0 || i >= n || j >= m) return;
    if(visited[i][j]) return;
    
    visited[i][j] = true;
    way++;
    
    if(way < 7)
    {
        for(int k=0;k<3;k++)
        {
            if( (graph[i+dx[k]][j+dy[k]]=='I' || graph[i+dx[k]][j+dy[k]]=='H'   || graph[i+dx[k]][j+dy[k]]=='O' || graph[i+dx[k]][j+dy[k]]=='V'   || graph[i+dx[k]][j+dy[k]]=='A' || graph[i+dx[k]][j+dy[k]]=='E')
                && !visited[i+dx[k]][j+dy[k]] )
            {
                if(k==0) path.push_back("left");
                else if(k==1) path.push_back("right");
                else if(k==2) path.push_back("forth");
                dfs(i+dx[k], j+dy[k]);
                break;
            }
        }
    }else{
        for(int k=0;k<3;k++)
        {
            if( graph[i+dx[k]][j+dy[k]]=='#' )
            {
                if(k==0) path.push_back("left");
                else if(k==1) path.push_back("right");
                else if(k==2) path.push_back("forth");
                break;
            }
        }
    }

}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        
        way = 0;
        path.clear();
        memset(visited, false, sizeof(visited));
        memset(graph, '.',sizeof(graph));

        input();
        dfs(x,y);

        cout << path[0];
        for(int i=1;i<path.size();i++){
            cout << " " << path[i];
        }
        cout << endl;
    }
}
