#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

int main() {
    int n,x,t=0;
    int arr[100005];
    int last[100005];
    bool visited[100005];

    memset(arr,0,sizeof(arr));
    memset(last,0,sizeof(last));
    memset(visited,false,sizeof(visited));

    cin >> n;
    FOR(i,1,n)
    {
        cin >> x;
        if(arr[x]==0 && !visited[x])
        {
            arr[x] = i; // arr[1] = 1
            t++;
        }
        else if( arr[x]!=0 && !visited[x] )
        { 
            arr[x] = i - arr[x]; // 2
            visited[x] = true;
            last[x] = i;
       } 
       else if( arr[x]!=0 && visited[x] )
       {
           if( i - last[x] != arr[x]){
               t--;
               arr[x] = 0;
            }else
            {
                last[x] = i;
            }
        }
    }

    cout << t << "\n";
    REP(i,100005)
    {
             if( arr[i]!=0 && !visited[i] ) cout << i << " " << 0 << "\n";
        else if( arr[i]!=0 &&  visited[i] ) cout << i << " " << arr[i] << "\n";
    }

}
