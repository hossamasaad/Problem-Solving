#include <bits/stdc++.h>
using namespace std;

int main() {

    int testCases = 0 ;
    int N , Q , k , qur ;

    cin >> testCases ;
    for(int a = 0 ; a < testCases ; a++){
        cin >> N >> Q ;
        int x[N];
        for (int i = 0; i < N; i++) cin >> x[i] ;
        for(int b=0 ; b < Q ;b++) {
            cin >> qur ;
            k = qur & x[0] ;
            for (int i = 1; i < N ; i++) {
                if(k == qur) break;
                k = max(k , qur & x[i]) ;
            }
            cout << k << endl;
        }
    }
    return 0;
}
