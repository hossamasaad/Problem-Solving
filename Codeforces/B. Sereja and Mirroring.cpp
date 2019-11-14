#include <bits/stdc++.h>
 
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
 
using namespace std;
char c;
int n,m,ctr;
string arr[105];
 
int main() {
    cin >> n >> m;
    
    REP(i,n)REP(j,m)
    {
        cin >> c;
        arr[i] += c;
    }
 
    if(n%2!=0){
        cout << n;
        return 0;
    }
 
    while(true){
        ctr = 0;
        if(n%2!=0) break;
        REP(i,n/2){
            if(arr[i] == arr[n-1-i]) ctr++;
            else break;
        }
        if(ctr*2==n) n = ctr;
        else break;
    }
 
    cout << n;
    return 0;
}
