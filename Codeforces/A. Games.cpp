#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    int x = 0;
    int numOfteams = 0;
    cin >> numOfteams;
    int arr[numOfteams][2];
    for(int i =0 ; i<numOfteams ; i++){
        for(int j = 0 ; j<2 ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i<numOfteams ;i++){
        for(int j = 0; j<numOfteams ;j++){
            if(arr[i][0]==arr[j][1]){
                x++;
            }
        }
    }
    cout<<x<<endl;
    return 0;
}
