#include <bits/stdc++.h>
 
#define eps 1e-8
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
 
using namespace std;

int fact(int n)
{
   if (n == 0 || n == 1)
      return 1;
   else
      return n * fact(n - 1);
}

int C(int n,int r)
{
	return fact(n) / ( fact(r) * fact(n-r) );
}

int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	int x = 0 , q = 0 , len1 = s1.length() , len2 = s2.length();
	REP(i,len1)
	{
		if(s1[i]=='+') x++;
		else x--;
	}
	REP(i,len2)
	{
		if( s2[i] == '+' ) x--;
		else if( s2[i] == '-' ) x++;
		else q++;
	}
	double ans = 0;
	if(q==0)
	{
		if(x==0){
			ans++;
			cout << fixed << setprecision(12) << ans;
		}
		else cout << fixed << setprecision(12) << ans;
		return 0;
	}

	if( abs(x)-q > 0 )
	{
		cout << fixed << setprecision(12) << ans;
		return 0;
	}

	if(  (x+q) % 2 != 0 )
	{
		cout << fixed << setprecision(12) << ans;
		return 0;
	}

	int tmp = -1*q,a=0;
	REP(i,q+1)
	{
		if(tmp==x) a = i;
		tmp += 2;
	}

	ans = (double) C(q,a) / pow(2,q);
	cout << fixed << setprecision(12) << ans;

	return 0;
}
