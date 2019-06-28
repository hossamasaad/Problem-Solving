#include <iostream>
using namespace std;

int getMax(int a , int b){
    if(a>=b) return a;
    else return b;
}

string getPercentage(int ctr){
    if(ctr==1) return "1/6" ;
    if(ctr==2) return "1/3" ;
    if(ctr==3) return "1/2" ;
    if(ctr==4) return "2/3" ;
    if(ctr==5) return "5/6" ;
    if(ctr==6) return "1/1" ;
    return "0";
}
int main() {
    
    int  n,m,max,ctr=0;
    cin >> n >> m;
    max = getMax(n,m);
    for(int i=max ; i<=6 ; i++){
        ctr++;
    }
    cout << getPercentage(ctr) ;
    return 0;
}
