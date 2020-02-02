#include <bits/stdc++.h>

using namespace std;

int n,m;
vector<int> adjList[105];
vector<int> order;
bool visited[105];

void clear()
{
    memset(visited, false, sizeof(visited));
    order.clear();
    for(int i=0;i<n;i++)
        adjList[i].clear();
}

void input()
{
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin >> x >> y;
        adjList[y].push_back(x);
    }
}

void TopSort(int i)
{
    visited[i] = true;
    for(int j=0;j<adjList[i].size();j++)
    {
        if(!visited[ adjList[i][j] ])
            TopSort(adjList[i][j]);
    }
    order.push_back(i);
}

void solve()
{
    for(int i=1;i<=n;i++)
    {
        if(!visited[i]){
            TopSort(i);
        }
    }
}

void printAnswer()
{
    cout << order[0];
    for(int i=1;i<order.size();i++)
        cout << " " << order[i];
    cout << endl;
}


int main() {

    cin >> n >> m; // 5 4
    while(n)
    {
        clear();
        input();
        solve();
        printAnswer();
        cin >> n >> m;
    }

}
