/*
 * Hossam
 */
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N = 0;
    while(cin>>N){
        int n = 1 << N;
        int arr[n] , potencies[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
 
        for (int i = 0; i < n; ++i) {
            int pot = 0;
            for (int j = 0; j < N ; ++j) {
                pot += arr[i^(1<<j)];
            }
            potencies[i] = pot;
        }
 
        int max = 0;
        for (int k = 0; k < n-1 ; ++k) {
            if(potencies[k]+potencies[k+1]>max){
                max = potencies[k]+potencies[k+1];
            }
        }
 
        cout << max << endl ;
    }
}
