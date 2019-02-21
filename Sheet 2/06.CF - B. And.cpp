/*
 * Hossam
 */
 
 #include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int x=0 , n=0 , aa=0 ;
    cin >> n >> x;
    int marr[100010] , arr[100010] , xarr[100010] ;
 
    memset(arr  , 0 , sizeof(arr ));
    memset(xarr , 0 , sizeof(xarr));
    memset(marr , 0 , sizeof(marr));
 
    for (int i = 0; i < n; ++i) {
 
        cin >> arr[i];
 
        marr[arr[i]]++;
        xarr[arr[i] & x]++;
 
        if(marr[arr[i]] == 2){
            cout  << 0 << endl ;
            return 0;
        }
        if(xarr[arr[i] & x] > 1){
            aa++;
        }
    }
 
    for(int i=0;i<n;i++)
    {
        if(marr[(arr[i]&x)]-(arr[i]==(arr[i]&x))){
            cout<< 1 << endl ;
            return 0;
        }
    }
 
    if(aa > 0){
        cout << 2 << endl ;
        return 0;
    }
 
    cout << -1 << endl ;
    return 0;
}
