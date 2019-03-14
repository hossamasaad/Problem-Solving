#include <bits/stdc++.h>
using namespace std;

string binaryRepresentation(int num) {
    string str = "";
    for (int i = 0; i < 64; i++) {
        str = (num & 1 ? "1" : "0") + str;
        num >>= 1;
    }
    return str;
}
int toInteger( string str ){
    int num = 0;
    for (int i = 0; i < str.size() ; ++i) {
        if(str[i] == '1'){
            num += pow(2,i);
        }
    }
    return num ;
}

int main() {
  int num = 0;
  cin >> num;
	while(num){
		string a ;
		string b ;
		string n = binaryRepresentation(num);
		int x = 1;
		for (int i = n.size()-1 ; i >= 0 ; i--) {
			if(x==1 && n[i]== '1' ){
				a += n[i];
				b += '0' ;
				x = 2;
			}
			else if(x==2 && n[i] == '1' ){
				b += n[i];
				a += '0' ;
				x = 1;
			}
			else{
				a += '0' ;
				b += '0' ;
			}
		}
		cout << toInteger(a) << " " << toInteger(b) << endl;

    cin >> num;
	}
	return 0;
}
