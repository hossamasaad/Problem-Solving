#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,ctr=n;
    string s;
    map< string , int > myMap;
    map< int , string > ans;

    cin >> n;
    REP(i,n)
    {
        cin >> s;
        myMap[s] = ctr;
        ctr--; 
    }

    for(auto i : myMap) ans[i.second] = i.first;
    for(auto i : ans)
    {
        cout << i.second << "\n";
    }
}
