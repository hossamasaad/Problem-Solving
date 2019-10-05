#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;
int k,a,b;
int ans[10];
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

int sol = 0;
void backtrack(int col)
{
    if(col>=8){
        if(visited[a][b]){
            sol++;
            cout << setw(2) << sol << "      ";
            cout << ans[0]+1;
            FOR(i,1,7){
                cout << " " << ans[i] + 1;
            }
            cout << endl;
        }
        return;
    }

    REP(i,8){
        if(isValid(i, col)){
            visited[i][col] = true;
            ans[col] = i;
            backtrack(col + 1); 
            visited[i][col] = false;
            ans[col] = -1;
        }
    }
}
int main() {

    cin >> k;
    int ctr = 0;
    while(k--){
        if(ctr++) cout << endl;
        cin >> a >> b;
        a--; b--;

        memset(visited,false,sizeof(visited));
        memset(ans,-1,sizeof(ans));
        sol = 0;
        
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");

        backtrack(0);
    }
    return 0;
}
