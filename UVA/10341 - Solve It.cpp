#include <bits/stdc++.h>

using namespace std;

int main(){
    int p,q,r,s,t,u;
    double l,h,m,ans;
    
    while(scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u)==6)
    {    
        if(p*exp(-1)+q*sin(1)+r*cos(1)+s*tan(1)+t+u>1e-9 || p+r+u<0)
        {
            printf("No solution\n");
            continue;
        }
        
        l=0.0;
        h=1.0;
        
        // binary search

        for(int i=0;i<30;i++){
            m=(l+h)/2;
            ans=p*exp(-m)+q*sin(m)+r*cos(m)+s*tan(m)+t*m*m+u;
            if(ans>0) l=m;
            else h=m;
        }
        
        printf("%.4f\n",l);
    }
    
    return 0;
}
