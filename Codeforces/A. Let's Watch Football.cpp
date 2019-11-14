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
 
    int a,b,c;
    double ans;
    cin >> a >> b >> c;
    if(b>=a){
        cout << 0;
        return 0;
    }
 
    ans = (double)(1- (double) b/a ) * a / b * c ;
    cout << ceil(ans);
    return 0;
}
