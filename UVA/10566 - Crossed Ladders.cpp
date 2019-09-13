#include <bits/stdc++.h>

using namespace std;

#define eps 1e-5
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

int main() {
    
    double c, x, y;
    while(scanf("%lf %lf %lf", &x, &y, &c) == 3) {

        double l = 0, r = min(x,y) , mid , ans;
        while(true) {
            
            mid = (l+r)/2;

            // equation to test answers
            ans = sqrt(y*y-mid*mid)*sqrt(x*x-mid*mid)/(sqrt(y*y-mid*mid)+sqrt(x*x-mid*mid));
            if(fabs(ans-c) <= eps) break; // if (ans==c) 

            // using binary search to find answer
            if(ans > c) l = mid;
            else r = mid;
        }
        printf("%.3lf\n", mid);

    }
    return 0;
}
