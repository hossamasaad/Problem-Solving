#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    cin >> n >> m;
    int a[250000] , f[250000];
    for(int i=1 ;i<=n;i++) cin >> a[i];
    
    f[0] = f[1] = 1;
    for(int i=2 ; i<=n ; i++) f[i] = (f[i-1] + f[i-2])%1000000000;

    for(int i=1 ; i<=m ; i++){
        int q;
        cin >> q;
        
        if(q==1){
            int x , v;
            cin >> x >> v;
            a[x] = v;
        }else if(q==2){
            int l , r ;
            int sum=0;
            cin >> l >> r;
            for(int j=0 ; j<=r-l ; j++){
                sum = (sum + (long long)f[j] * a[l+j] ) % 1000000000;
            }
            cout << sum << endl;
        }else if(q==3){
            int l , r , d;
            cin >> l >> r >> d ;
            for(int j=l ; j<=r ; j++){
                a[j] += d;
            }
        }
        
    }
    return 0;
}
