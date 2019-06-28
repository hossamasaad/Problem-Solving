#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
     int s1=0 , s2=0 , s3=0 , s4=0 ;
     cin>>s1>>s2>>s3>>s4;
     int arr[4]={s1,s2,s3,s4};
     int need = 0;
     sort(arr,arr+4);

     for(int i = 0;i<3;i++){
        if(arr[i]==arr[i+1]) need++;
     }


     cout<<need<<endl;
}
