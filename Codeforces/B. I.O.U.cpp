#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

int main() {
    int n,m,a,b,c,sum=0;
    cin >> n >> m;
    int arr[n+1];
    memset(arr,0,sizeof(arr));
    REP(i,m)
    {
        cin >> a >> b >> c;
        arr[a] += c;
        arr[b] -= c; 
    }

    REP(i,n+1)
    {
        if(arr[i]>0) sum += arr[i]; 
    }

    cout << sum;
}
