#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

int graph[10][10];
bool visited[10][10];

bool isValid( int row, int col) 
{ 
    for (int i = 0; i < col; i++) 
        if (visited[row][i]) 
            return false; 
  
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if (visited[i][j]) 
            return false; 
  
    for (int i = row, j = col; j >= 0 && i < 8; i++, j--) 
        if (visited[i][j]) 
            return false; 
    return true; 
} 
int c = 0;
int maxi = 0;

void backtrack(int col){
    if(col>=8){
        if(c>maxi) maxi = c;
        return;
    }

    REP(i,8){
        if(isValid(i,col)){
            visited[i][col] = true;
            c += graph[i][col];
            backtrack(col+1);
            c -= graph[i][col];
            visited[i][col] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin >> k;
    while(k--){
        REP(i,8)REP(j,8) cin >> graph[i][j];
        memset(visited,false,sizeof(false));
        maxi = 0;
        c = 0;
        backtrack(0);
        cout << setw(5) << maxi << endl;
    }
    return 0;
}
