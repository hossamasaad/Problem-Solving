#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

vector< int > v(105);
int mem[105][105];
int n;

int getMinRest(int i, int last)
{
    if(i==n) return 0; // base case
    if(mem[i][last]!=-1) return mem[i][last]; // memoiztaion

    int rest = 0;
    
    // two is closed rest sould increase by 1 and last = 0
    if(v[i]==0) rest = 1 + getMinRest(i+1,0);
    
    // contest is carried out
    else if(v[i]==1)
    {
        if(last != 1) rest = getMinRest(i+1,1); // can make contest
        else rest = 1 + getMinRest(i+1,0);      // take a rest
    }

    // gym is open
    else if(v[i]==2)
    {
        if(last != 2) rest = getMinRest(i+1,2); // go to gym
        else rest = 1 + getMinRest(i+1,0);      // take a rest
    }

    // both are open
    else if(v[i]==3)
    {
        if(last == 2) rest = getMinRest(i+1,1);   // last is gym make a contest
        else if(last == 1) rest = getMinRest(i+1,2); // last is contest go to gym
        else if(last == 0){
            rest = min(getMinRest(i+1,1),getMinRest(i+1,2)); // last is rest try both cases
        }
    }
    return mem[i][last] = rest;
}

int main()
{
    cin >> n;
    REP(i,n) cin >> v[i];

    memset(mem,-1,sizeof(mem));
    int mini = getMinRest(0,0);
    cout << mini << "\n";
}
