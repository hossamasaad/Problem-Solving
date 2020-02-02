#include <iostream>

using namespace std;

char graph[1000][1000];
bool visited[1000][1000];
int n;

int dx[8] = {1,1,1,0,0,-1,-1,-1};
int dy[8] = {0,1,-1,1,-1,0,1,-1};

void input()
{  
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> graph[i][j];
            visited[i][j] = false;
        }
    }
}

void dfs(int i,int j)
{
    if( i<0 || j<0 || i >= n || j >= n) return;
    if(visited[i][j] || graph[i][j] == '0') return;
    visited[i][j] = true;

    for(int k=0;k<8;k++)
    {
        dfs(i+dx[k],j+dy[k]);
    }
}

int main() {
    int cas = 0;
    while(cin >> n)
    {
        cas++;
        input();
        int ctr = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!visited[i][j] && graph[i][j] == '1')
                {
                    dfs(i,j);
                    ctr++;
                }
            }
        }
        cout << "Image number " << cas <<  " contains " << ctr << " war eagles." << endl;
    }
}
