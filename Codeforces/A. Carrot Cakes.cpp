
 #include <iostream>
using namespace std;

int getMax(int a,int b){
  if(a>=b) return a;
  return b;
}
int withoutNewOne(int n,int t,int k){
    int time = 0;
    while(n>0){     // n = 4
      time += t;    //  t = 12
      n -= k;       // n = 0
    }
    return time;
}

int withNewOne(int n,int t ,int k ,int d){
    int t1=0 , t2=0 , time=0;
    while( time < d && n>0){  //time=6 n =4
      time += t;              // time = 6
      n -= k;                 // n = 4
    }
    t1 = time;      // t1 = 6
    t2 = d;         // t2 = 6 
    while(n>0){
      if(t1==t2){
        t1 += t;
        n -= 2*k;
      }
      if(time>t1 && t1 < t2){
        t1 += t  ;
        n -= k;
      }else if(time>t2 && t1 > t2){
        t2 += t ;
        n -= k;
      }
      time += t;
    }

    return max(t1, t2) ;
}

int main() {
    int n,t,k,d;
    cin >> n >> t >> k >> d;
    int t1 = withoutNewOne(n,t,k);
    int t2 = withNewOne(n, t, k, d);

    if(t2>=t1) cout  << "NO" ;
    else cout << "YES" ;
}
