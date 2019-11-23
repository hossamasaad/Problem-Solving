#include <iostream>
#include <algorithm>

typedef long long ll;

using namespace std;

int main() {

    ll n,m,ctr=0;

    while(cin >> n && n){
        ctr++;

        ll arr[n];
        for(ll i=0;i<n;i++) cin >> arr[i];

        cin >> m;
        cout << "Case " << ctr << ":" << endl;
        ll q;
        for(ll i=0;i<m;i++)
        {
            cin >> q;
            ll minimum = 999999999,sub,result,sum;
            for(ll j=0;j<n;j++)
            {
                for(ll k=0;k<n;k++)
                {
                    if(j==k) continue;
                    result = arr[k] + arr[j];
                    sub = abs( result - q );
                    if( sub < minimum ){
                        minimum = sub;
                        sum = result;
                    }
                }
            }
            cout << "Closest sum to " << q << " is " << sum << "." << endl;
        }

    }
}
