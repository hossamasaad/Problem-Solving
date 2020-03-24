#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll countDivisors(ll n)
{
    ll cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) cnt++;
            else cnt = cnt + 2;
        }
    }
    return cnt;
}
int main() {
    ll n,L,R,max_num,max_divisor,x;
    cin >> n;
    while(n--)
    {
        cin >> L >> R;
        max_divisor = 0;

        for (int i = L; i <= R; ++i) {
            x = countDivisors(i);
            if(x>max_divisor){
                max_divisor = x;
                max_num = i;
            }
        }
        cout << "Between " << L << " and " << R << ", " << max_num << " has a maximum of " << max_divisor<< " divisors." << endl;
    }
}
