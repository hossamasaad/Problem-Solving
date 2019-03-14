#include <bits/stdc++.h>
using namespace std;
 
int toInteger( string str ){
    int num = 0;
    for (int i = str.size()-1 , j=0 ; i >= 0 ; i-- , j++) {
        if(str[i] == '1'){
            num += pow(2,j);
        }
    }
    return num ;
}
 
int main() {
	int t=0 , ctr=0 , indx;
	string a , s;
	string::iterator it ;
	cin >> t;
	while(t--){
		ctr++;
		cin >> a;
		while(a.length() != 0){
			if( (a.length() & 1) == 1){
				indx = (a.length()-1) / 2 ;
				it = a.begin() + indx ;
				s.push_back( a[indx] );
				a.erase( it );
			}
			else{
				indx = a.length() / 2;
				if( a[indx] > a[indx-1]){
					it = a.begin() + indx ;
					s.push_back( a[indx] );
					a.erase( it );
				}
				else{
					indx -= 1 ;
					it = a.begin() + indx ;
					s.push_back( a[indx] );
					a.erase( it );
				}
			}
		}
		cout << "Case #" << ctr <<": " << toInteger(s) << endl ;
		s = "" ;
	}
}
