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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,g,A=0,G=0;
    string s;
    cin >> n;

    REP(i,n)
    {
        cin >> a >> g;
        if(a<=g)
        {
            if( abs(A+a-G) <= 500)
            {
                s += 'A';
                A += a;
            }
            else
            {
                s += 'G';
                G += g;
            }
        }
        else
        {
            if( abs(G+g-A) <= 500)
            {
                s += 'G';
                G += g;
            }
            else
            {
                s += 'A';
                A += a;
            }
        }
    }

    cout << s;
    return 0;
}
