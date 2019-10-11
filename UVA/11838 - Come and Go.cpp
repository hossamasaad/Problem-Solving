#include <bits/stdc++.h>

using namespace std;
vector<int> graph[2005];
stack<int> st;
int low[2005],level[2005],scc;
bool visited[2005];

void tarjan(int pos,int lvl){
    
    level[pos] = low[pos] = lvl;
    st.push(pos);
    visited[pos] = true;

    for(int i=0;i<graph[pos].size() ;i++){
        int to = graph[pos][i];

        if(level[to] == -1){
            tarjan(to,lvl+1);
            low[pos] = min( low[pos] , low[to] );
        }
        else if(visited[to]){
            low[pos] = min( low[pos] , low[to] );
        }
    }

    if(low[pos] == lvl){
        while(true){
            int cur = st.top();
            st.pop();
            visited[cur] = true;
            if(cur == pos) break;
        }

        scc++;
    }

}
int main() {
    
    int n,m,u,v,p;
    
    while(true){
        
        cin >> n >> m;
        if(!n) break;

        // clear last case
        for(int i=0;i<=n;i++) graph[i].clear();

        // Making graph
        for(int i=0;i<m;i++){
            cin >> u >> v >> p;
            graph[u].push_back(v);
            if(p==2) graph[v].push_back(u);
        }

        // rest values
        memset(visited,false,sizeof visited);
        memset(level,-1,sizeof level);
        scc=0;

        for(int i=1;i<n;i++){
            if(level[i]==-1){
                tarjan(i, 0);
            }
        }

        if(scc == 1) cout << 1 << endl;
        else cout << 0 << endl;
    }


}
