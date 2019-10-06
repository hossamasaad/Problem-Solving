/*
 * Author : Hossam Asaad
 */
#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;
const int N = 5;
vector<int> v(5);
bool visited[6],state = false;

void backtrack(int l,int sum)
{
    if(l == 5 && sum == 23)
    {
        state = true;
        return;
    }

    REP(i,N){
        if(!visited[i]){
            visited[i] = true;
            backtrack(l+1,sum+v[i]);
            backtrack(l+1,sum*v[i]);
            backtrack(l+1,sum-v[i]);
            visited[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(true)
    {
        REP(i,5) cin >> v[i];
        if(v[0]==0) break;

        memset(visited,false,sizeof(visited));
        int l = 0;
        state = false;
        
        REP(i,N){
            if(!visited[i]){
                visited[i] = true;
                backtrack(l+1,v[i]);
                visited[i] = false;
            }
        }
        
        if(state) cout << "Possible" << endl;
        else cout << "Impossible" << endl;
    }
    return 0;
}
