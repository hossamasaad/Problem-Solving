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

    int n,k,x;
    bool visited[105];
    vector < int > answers; 
    cin >> n >> k;

    memset(visited,false,sizeof(visited));
    FOR(i,1,n)
    {
        cin >> x;
        if(!visited[x])
        {
            visited[x] = true;
            answers.push_back(i);
        }
    }

    if(answers.size()>=k)
    {
        cout << "YES" << "\n";
        REP(i,k) cout << answers[i] << " ";
    }
    else
    {
        cout << "NO" << "\n";
    }
}
