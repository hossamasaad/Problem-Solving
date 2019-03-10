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
        int queries[Q];
        for (int i = 0; i < N; ++i) {
            cin >> x[i] ;
        }

        for (int i = 0; i < Q ; ++i) {
            cin >> queries[i] ;
            int maxNum = 0;
            if(queries[i] == 0) cout << 0 << endl;
            else {
                for (int j = 0; j < N; ++j) {
                    int k = queries[i] & x[j];
                    if (k >= maxNum) {
                        maxNum = k;
                    }
                }
                cout << maxNum << endl;
            }
        }
    }
    return 0;
}
