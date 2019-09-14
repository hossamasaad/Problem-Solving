#include <bits/stdc++.h>

#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

using namespace std;
int main() {
	
	int n,x;
	bool state;
  	cin >> n;
	while(n)
	{
		state = false;
		for(int y=1;y<60;y++)
		{
			x = n + pow(y,3);
			x = cbrt(x) + .1;
			if( pow(x,3)-pow(y,3) == n )
			{
				cout << x << " " << y << "\n";
				state = true;
				break;
			}
		}
		if(!state) cout << "No solution" << "\n";
		cin >> n;
	}
}
