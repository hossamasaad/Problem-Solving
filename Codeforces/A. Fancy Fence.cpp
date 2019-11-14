#include <bits/stdc++.h>
 
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
 
using namespace std;

int t,a;

bool check(int){
    if(360 % (180-a) == 0) return true;
    return false;
}
int main() {
    
    cin >> t;
    while(t--){
        cin >> a;
        if( check(a) ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
