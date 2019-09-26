#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;
int k;

string swaap(string s)
{
    int len = s.length();
    REP(i,len)
    {
        int last = -1;
        FOR(j,i+1,min(i+k,len))
        {
            if(last == -1 && s[i] < s[j])
            {
                last = j;
            }
            else if(last != -1 && s[j] > s[last])
            {
                last = j;
            }
        }
        if(last != -1)
        {
            while(last > i){
                swap(s[last-1],s[last]);
                last--;
                k--;
            }
        }
        if(k==0) return s;
    }
    return s;
}

int main(){
    string s;
    cin >> s >> k;
    cout << swaap(s);
    return 0;
}
