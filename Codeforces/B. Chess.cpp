#include <iostream>
using namespace std;
 
int getCount(int arr[8][8]){
    int ctr=0;
    for(int i=0 ; i<8 ;i++){
        for(int j=0 ; j<8 ; j++){
            if(arr[i][j]==0) ctr++;
        }
    }
    return ctr;
}
int getFisrtChar(string s){
    if(s[0]=='a') return 0;
    if(s[0]=='b') return 1;
    if(s[0]=='c') return 2;
    if(s[0]=='d') return 3;
    if(s[0]=='e') return 4;
    if(s[0]=='f') return 5;
    if(s[0]=='g') return 6;
    if(s[0]=='h') return 7;
}
int getSecondChar(string s){
    if(s[1]=='1') return 0;
    if(s[1]=='2') return 1;
    if(s[1]=='3') return 2;
    if(s[1]=='4') return 3;
    if(s[1]=='5') return 4;
    if(s[1]=='6') return 5;
    if(s[1]=='7') return 6;
    if(s[1]=='8') return 7;
}
 
int main() {
 
    string rook;
    string knight;
    cin >> rook >>  knight ;
 
    int arr[8][8]={{0,0,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0}};
 
    int x = getFisrtChar (rook);
    int y = getSecondChar(rook);
 
    for(int i=0 ; i<8 ; i++) arr[x][i]=1;
    for(int i=0 ; i<8 ; i++) arr[i][y]=1;
 
 
    if(x<6&&y<7){arr[x+2][y+1] = 1;}
    if(x<6&&y>0){arr[x+2][y-1] = 1;}
    if(x<7&&y<6){arr[x+1][y+2] = 1;}
    if(x<7&&y>1){arr[x+1][y-2] = 1;}
    if(x>1&&y<7){arr[x-2][y+1] = 1;}
    if(x>1&&y>0){arr[x-2][y-1] = 1;}
    if(x>0&&y<6){arr[x-1][y+2] = 1;}
    if(x>0&&y>1){arr[x-1][y-2] = 1;}
 
    int a = getFisrtChar(knight);
    int b = getSecondChar(knight);
 
	arr[a][b] = 1;
    if(a<6&&b<7){arr[a+2][b+1] = 1;}
    if(a<6&&b>0){arr[a+2][b-1] = 1;}
    if(a<7&&b<6){arr[a+1][b+2] = 1;}
    if(a<7&&b>1){arr[a+1][b-2] = 1;}
    if(a>1&&b<7){arr[a-2][b+1] = 1;}
    if(a>1&&b>0){arr[a-2][b-1] = 1;}
    if(a>0&&b<6){arr[a-1][b+2] = 1;}
    if(a>0&&b>1){arr[a-1][b-2] = 1;}
 
	cout << getCount(arr);
 
    return 0;
}
