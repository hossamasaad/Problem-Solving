#include <iostream>

using namespace std;

int main()
{
     string s ;
     string t ;

     cin>>s;
     cin>>t;

     int c = 0;

     for(int i=0 ; i<t.length() ; i++ ){
        if(s[c]==t[i]){
            c++;
        }
     }

     cout<<c+1<<endl;
}
