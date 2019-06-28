#include <iostream>
using namespace std;

int main() {
   int n , ones=0 , twos=0 , threes=0 ;
   cin >> n;
   int arr[n] ; 
   for(int i=0 ; i<n ; i++){
     cin >> arr[i] ;
     if(arr[i] == 1) ones++;
     else if(arr[i] == 2) twos++;
     else if(arr[i] == 3) threes++;
   }

  if (ones == 0 || twos == 0 || threes == 0){
    cout << 0 ;
    return 0;
  }
  int k = min(ones , min(twos,threes));
  cout << k << endl;

  int team[3] =  {0 , 0 ,0} ;
  for(int i=0 ; i<k ; i++){
    for(int j=0 ; j<n ; j++){
      if(arr[j]==1){
        team[0] = j+1;
        arr[j]  = 5;
        break ;
      }
    }
    for(int m=0 ; m<n ; m++){
      if(arr[m]==2){
        team[1] = m+1;
        arr[m]  = 5;
        break ;
      }
    }
    for(int q=0 ; q<n ; q++){
      if(arr[q]==3){
        team[2] = q+1;
        arr[q]  = 5;
        break ;
      }
    }
    cout << team[0] << " " << team[1] <<" " << team[2] << endl;
  }
}
