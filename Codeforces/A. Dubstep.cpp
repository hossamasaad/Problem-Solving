#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main() {
    string s;
    cin >> s;
    int i=0,j;
    while(i<s.length()-1){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            if(i==0){
                s.erase(i,3);
            }else{
                s.erase(i,2);
                s[i]=' ';
            }
            j=i;
        }else{
            i++;
        }
    }
    cout << s;
}
