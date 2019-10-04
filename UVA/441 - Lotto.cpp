#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int a=0 , s[13] ,ctr=0;
    cin >> a;
    while(a){
        if(ctr){ cout << endl;}
        ctr++;
 
        for(int i=0 ; i<a ; i++) cin >> s[i];
 
        for(int i=0 ; i<a-5 ; i++){
            for(int j=i+1; j<a-4 ; j++){
                for(int k=j+1 ; k<a-3 ; k++){
                     for(int l=k+1 ; l<a-2 ; l++){
                        for(int m=l+1 ; m<a-1 ; m++){
                             for(int n=m+1 ; n<a ; n++){
                                cout << s[i] << " " << s[j] << " " << s[k] << " " << s[l] << " "<< s[m] << " " << s[n] << endl;
                             }
                        }
                    }
                }
            }
        }
        cin >> a;
    }
    return 0;
}
 
