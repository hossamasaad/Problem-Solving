#include <iostream>
 
using namespace std;
 
int main()
{
	
    int numOfCards = 0;
    cin>>numOfCards;
    int arr[numOfCards];
    for(int i=0 ; i<numOfCards ; i++){
        cin>>arr[i];
    }
    int k = 1;
    int x = 0;
    int y = 0;
 
    int i = 0;
    while(i<numOfCards){
        if(k%2 != 0){
            if(arr[i]>arr[numOfCards-1]){
                x = x + arr[i];
                k++;
                i++;
            }
            else{
                x = x + arr[numOfCards-1];
                k++;
                numOfCards--;
            }
        }else{
            if(arr[i]>arr[numOfCards-1]){
                y = y + arr[i];
                k++;
                i++;
            }
            else{
                y = y + arr[numOfCards-1];
                k++;
                numOfCards--;
            }
        }
    }
    cout<<x<<" "<<y<<endl;
 
    return 0;
}
