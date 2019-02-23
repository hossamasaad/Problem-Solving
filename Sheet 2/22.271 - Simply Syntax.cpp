#include  <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(cin >> s){
        int n=0 ;
        for(int i= s.length()-1 ; i >=0   ;i--){
            if((int)s[i]>=112 && (int)s[i]<=122){
                n++;
            }
            else if(s[i]=='C' || s[i]=='D' || s[i]=='E' || s[i]=='I'){
                if(n>=2){
                    n--;
                }
                else{
                    n=0;
                    break;
                }
            }
            else if(s[i]=='N'){
                if(n<1){
                    n=0;
                    break;
                }
                else{
                    n = n;
                }
            }
        }
        if(n==1) cout << "YES" << endl;
        else     cout << "NO"  << endl;
    }
    return 0;
}
