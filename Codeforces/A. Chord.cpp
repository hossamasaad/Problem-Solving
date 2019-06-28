#include <iostream>
using namespace std;

int which(string X){
    if     (X=="C" ) return 1;
    else if(X=="C#") return 2;
    else if(X=="D" ) return 3;
    else if(X=="D#") return 4;
    else if(X=="E" ) return 5;
    else if(X=="F" ) return 6;
    else if(X=="F#") return 7;
    else if(X=="G" ) return 8;
    else if(X=="G#") return 9;
    else if(X=="A" ) return 10;
    else if(X=="B" ) return 11;
    else if(X=="H" ) return 12;
    
    return 0;

}

int state(int x, int y, int z){
    if ((y-x+12)%12==4&&(z-y+12)%12==3) return 1;
    if ((y-x+12)%12==3&&(z-y+12)%12==4) return -1;
    return 0;
}

int main() {
    string X , Y , Z;
    int x , y ,z;
    cin >> X >> Y >> Z;
    x = which(X);
    y = which(Y);
    z = which(Z);
    
    int t = state(x, y, z);
    
    if (t==1){   cout<<"major"<<endl; return 0;}
    else if (t==-1){cout<<"minor"<<endl;return 0;}
    
    t=state(x, z, y);
    if (t==1){   cout<<"major"<<endl; return 0;}
    else if (t==-1){cout<<"minor"<<endl;return 0;}
    
    t=state(y, x, z);
    if (t==1){   cout<<"major"<<endl; return 0;}
    else if (t==-1){cout<<"minor"<<endl;return 0;}
    
    t=state(y, z, x);
    if (t==1){   cout<<"major"<<endl; return 0;}
    else if (t==-1){cout<<"minor"<<endl;return 0;}
    
    t=state(z, x, y);
    if (t==1){   cout<<"major"<<endl; return 0;}
    else if (t==-1){cout<<"minor"<<endl;return 0;}
    
    t=state(z, y, x);
    if (t==1){   cout<<"major"<<endl; return 0;}
    else if (t==-1){cout<<"minor"<<endl;return 0;}
    
    cout<<"strange"<<endl;

    return 0;
}
