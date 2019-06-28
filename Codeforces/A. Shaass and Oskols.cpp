#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    cin>>n;

    int arr[n];
    for( int i=0 ; i < n ; i++ ){
        cin>>arr[i];
    }

    int m = 0;
    cin>>m;

    while(m!=0){
        int x = 0 , y = 0 ;
        cin>>x>>y;
        arr[x-2]= arr[x-2] + y -1;
        arr[x]  = arr[x] + arr[x-1] - y;
        arr[x-1]= 0;
        m--;
    }

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
