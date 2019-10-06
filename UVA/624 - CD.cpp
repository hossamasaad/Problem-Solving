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
vector<int> v,ans,tmp;
int n,l,x,maxi=0;

void backtrack(int idx,int sum)
{
    if(sum > maxi){
        maxi = sum;
        ans = tmp;
    }
    FOR(i,idx,l-1)
    {
        if( v[i] + sum <= n ){
            tmp.push_back(v[i]);
            backtrack( i+1,sum+v[i] );
            tmp.pop_back();
        } 
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(cin >> n)
    {
        cin >> l;
        REP(i,l)
        {
            cin >> x;
            v.push_back(x);
        }

        maxi = 0;
        ans.clear();
        tmp.clear();

        backtrack(0,0);
        int len = ans.size();
        REP(i,len) cout  << ans[i] << " ";
        cout << "sum:" << maxi << endl;
        v.clear();
    }
    return 0;
}
