#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;
int n;
int ans[20] = {1};
int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41};
bool isPrime(int a)
{
    for (int i : prime)
        if (i == a) return true;
    return false;
}

void backtrack(int l,bool visited[]){
    if(l==n){
        if(!isPrime( ans[n-1] + 1))
            return;
        cout << "1";
        FOR(i,1,n-1){
            cout << " " << ans[i];
        }
        cout << endl;
    }
    FOR(i,2,n){
        if(visited[i]) continue;
        if( isPrime(ans[l-1]+i) ){
            visited[i] = true;
            ans[l] = i;
            backtrack(l+1,visited);
            visited[i] = false;
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 0;
    while(cin >> n){
        if(cases) cout << endl;
        cases++;
        bool visited[20]={0};
        cout << "Case " << cases << ":" << endl;
        backtrack(1,visited);
    }

    return 0;
}
