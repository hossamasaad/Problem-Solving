#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

vector<int> adjList[50];
bool visited[50];
vector<int> tmp;


void clear()
{
    memset(visited,false, sizeof(visited));
    REP(i,50) adjList[i].clear();
}

void DFS(int u)
{
    int cnt = 0;
    REP(i,adjList[u].size()){
        if(visited[ adjList[u][i] ]){
            cnt++;
        }
    }

    if(cnt >= 3) tmp.push_back(u);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while(cin >> n) {
        clear();

        int l; cin >> l;
        string vi; cin >> vi;

        REP(i, 3) visited[ vi[i] - 'A' ] = true;

        string s;
        REP(i, l)
        {
            cin >> s;
            adjList[s[0] - 'A'].push_back(s[1] - 'A');
            adjList[s[1] - 'A'].push_back(s[0] - 'A');
        }

        int cc = 0;
        REP(i,50){
            REP(i, 50) {
                if (!visited[i]) {
                    DFS(i);
                }
            }
            if(tmp.empty()) break;
            else{
                cc++;
                while(!tmp.empty()){
                    int tt = tmp.back(); tmp.pop_back();
                    visited[tt] = true;
                }
            }
        }

        REP(i,50)
            if(visited[i]) n--;


        if(!n) cout << "WAKE UP IN, " << cc << ", YEARS" << endl;
        else cout << "THIS BRAIN NEVER WAKES UP" << endl;
    }
}
