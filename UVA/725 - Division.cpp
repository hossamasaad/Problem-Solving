#include <bits/stdc++.h>
#include <string>
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;

bool isDifferent(int f,int s){
    
    string s1 = to_string(f);
    string s2 = to_string(s);
    
    if(f<10000) s1 = '0' + s1;
    if(s<10000) s2 = '0' + s2;

    REP(i,s1.length())REP(j,s1.length()){
        if(i==j) continue;
        if( s1[i]==s1[j] ) return false;
    }
    REP(i,s2.length())REP(j,s2.length()){
        if(i==j) continue;
        if( s2[i]==s2[j] ) return false;
    }
    REP(i,s1.length())REP(j,s2.length()) if( s1[i]==s2[j] ) return false;  

    return true;
}

int main() {
    

    int n,ctr=0;
    cin >> n;
    while(n)
    {
        bool state = false;
        ctr++;
        if(ctr>1) cout << endl;
        FOR(i,1234,98765/n)
        {
            int fnum = i * n;
            if( isDifferent(i,fnum) ){
                state = true;
                if(i<10000) cout << fnum << " / " << "0" << i << " = " << n << endl;
                else cout << fnum << " / " << i << " = " << n << endl;
            }            
        }
        if(!state) cout << "There are no solutions for " << n <<"."<<endl;
        cin >> n;
    }

    return 0;
}
