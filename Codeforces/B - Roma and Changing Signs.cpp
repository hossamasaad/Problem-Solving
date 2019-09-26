#include <bits/stdc++.h>
 
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
 
using namespace std;
 
ll n,k,input,sum=0;
vector<int> v;
 
int main()
{
    cin >> n >> k;
    REP(i,n)
    {
        cin >> input;
        if (input<0 && k>0){
            input *= -1;
            k--;
        }
        v.push_back(input);
    }
    sort(v.begin(),v.end());
 
    if(k%2==0){
        REP(i,n){
            sum += v[i];
        }
    }else{
        sum = -1 * v[0];
        FOR(i,1,n-1){
            sum += v[i];
        }
    }
    cout << sum;
}
