#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int testCases = 0 ;
    cin >> testCases ;
    while(testCases--){
        int N=0 , Q=0 ;
        cin >> N >> Q ;
        int x[N];
        for (int i = 0; i < N; ++i) cin >> x[i] ;
        while(Q--) {
            int qur = 0;
            cin >> qur ;
            if(qur == 0){
                cout << 0 << endl;
                continue;
            }
            int k = qur & x[0] ;
            for (int i = 1; i < N ; ++i) {
                if(k == x[i]) break;
                k = max(k , qur & x[i]) ;
            }
            cout << k << endl;
        }
    }
    return 0;
}
