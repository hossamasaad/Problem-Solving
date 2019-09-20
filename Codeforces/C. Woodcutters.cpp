#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

int n;
vector<int> x(100005),h(100005);
int mem[100005][3];

int getMaxTree(int i,int p,int w)
{
    if(i==n) return 0; // base case
    if(mem[i][w]!=-1) return mem[i][w];

    int maxi=0,c1=0,c2=0,c3=0;

    c1 = getMaxTree(i+1,x[i],0); // if let tree
    
    // if cut tree left
    if(i==0) c2 = 1 + getMaxTree(i+1,x[i],1);
    else if(x[i]-h[i]>p) c2 = 1 + getMaxTree(i+1,x[i],1);

    // if cut tree right
    if(i==n-1) c3 = 1 + getMaxTree(i+1,x[i]+h[i],2); 
    else if(x[i]+h[i]<x[i+1]) c3 = 1 + getMaxTree(i+1,x[i]+h[i],2);

    maxi = max(c1,max(c2,c3));
    
    return mem[i][w] = maxi;
}

int main()
{
    cin >> n;
    REP(i,n) cin >> x[i] >> h[i];    
    memset(mem,-1,sizeof(mem));
    cout << getMaxTree(0,0,0);
}
