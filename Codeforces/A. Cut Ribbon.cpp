#include<iostream>

using namespace std;

int main()
{
int n,a,b,c;
int ctr    = 0;
int result = 0;
cin>>n>>a>>b>>c;

for(int i=0;i<=n;i++){
  for(int j=0;j<=n;j++){
    result =n-a*i-b*j;
	  if(result >= 0 && result%c == 0){
	    ctr = max(ctr,(i+j+result/c));
    }
  }
}
  cout << ctr;
}
