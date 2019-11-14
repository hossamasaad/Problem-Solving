#include <bits/stdc++.h>
 
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n; string s;
    cin >> n >> s;
 
    bool visited[n];
    memset(visited,false,sizeof(visited));
    int dis[n];
 
    REP(i,n) cin >> dis[i];
 
    int i=0;
    while(i>=0 && i<n){
        if(visited[i]){
            cout << "INFINITE" << endl;
            return 0;
        }
        visited[i] = true;
        if(s[i]=='>'){
            i += dis[i];
        }
        else if(s[i]=='<'){
            i -= dis[i];
        }
    }
    cout << "FINITE";
    return 0;
}
