#include <iostream>
 
using namespace std;
 
bool shouldChange(string s)
{
	int len = s.length();
	for(int i=1;i<len;i++)
	{
		if(s[i]>='a') return false;
	}
	return true;
}
 
string change(string s)
{
	if(!shouldChange(s)) return s;
	int len = s.length();
	if( s[0] >= 'a' ){
		s[0] = s[0] - 32;
		for(int i=1;i<len;i++)s[i] = s[i] + 32;
	}
	else for(int i=0;i<len;i++) s[i] = s[i] + 32;
	return s;
}
int main() {
 
	string s;
	cin >> s;
	cout << change(s) << "\n";
 
}
