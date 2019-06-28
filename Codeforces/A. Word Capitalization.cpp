#include <iostream>

using namespace std;

int main()
{
    string word ;
    cin>>word;

    int a = word[0];
    if(a>90){
        a = a - 32;
        word[0] = a;
        cout<<word<<endl;
    }
    else {
        cout<<word<<endl;
    }
    return 0;
}
