/*
 * Author : Hossam Asaad
 */
#include <bits/stdc++.h>
 
#define ll long long
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,h=0,g=0;
    cin >> n;
    string s;
    cin >> s;
    int ctr = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='H'){
            h++;
            ctr++;
            if(ctr==2){
                cout << "NO" << endl;
                return 0;
            }
        }else{
            g++;
            ctr = 0;
            s[i] = 'B';
        }
    }
 
    if(h-1>g){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        cout << s << endl;
    }
    return 0;
}
