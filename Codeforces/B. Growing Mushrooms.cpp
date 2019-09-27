#include <bits/stdc++.h>
#include <math.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

double result = 0,r1,r2;
int n,t1,t2,k,a,b;
vector< pair<double,int> > v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double xx = .00001;
    cin >> n >> t1 >> t2 >> k;
    REP(i,n)
    {
        cin >> a >> b;
        r1 = (double) a * t1 - (double) k * a * t1 / 100  + b * t2; 
        r2 = (double) b * t1 - (double) k * b * t1 / 100  + a * t2; 

        result = max(r1,r2);
        v.push_back( make_pair(result+xx,i+1) );

        xx -= .000001;        
    }

    sort(v.begin(),v.end());

    FORD(i,n-1,0)
    {
        cout << v[i].second << " " << fixed << setprecision(2) << v[i].first << "\n";
    }


    return 0;
}
