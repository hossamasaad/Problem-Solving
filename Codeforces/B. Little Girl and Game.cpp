#include <bits/stdc++.h>
 
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
 
using namespace std;
 
int main() {
    
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
	string s;
	cin >> s;
 
	int arr[26];
	memset(arr,0,sizeof(arr));
 
	int len = s.length();
	REP(i,len) arr[s[i]-'a']++;
 
	int ctr=0;
	REP(i,26) if(arr[i]%2!=0) ctr++;
 
	if(ctr==0 || ctr % 2 !=0) cout << "First";
	else cout << "Second";
 
 
    return 0;
}
