#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int A , B , n ;
    cin >> A >> B  >> n ;
    double f;
    
    if(B==0){
        cout << 0 << endl;
        return 0;
    }
    else if(A==0){
        cout << "No solution" << endl;
        return 0;
    }else{
        for(int i=-100000 ; i<100000 ;i++){
           if(A*pow(i,n)==B){
               cout << i << endl;
               return 0;
           } 
        }
    }
    cout << "No solution" << endl;
    return 0;
}
