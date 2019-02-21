#include <bits/stdc++.h>

using namespace std;

int F3n_1(int n)
{
    int result = 0;
    if (n == 1) return 1;
    if (n&1){
        result = 1 + F3n_1(3 * n + 1);
    } else{
        result = 1 + F3n_1(n / 2);
    }
    return result;
}

int main() {
    int x=0 , y=0;

    while(cin >> x >> y){
        int max=0;
        cout << x << " " << y << " ";
        if(x>y){
            int temp=0;
            temp = x;
            x = y;
            y = temp;
        }
        for (int i = x; i <= y ; ++i) {
            if(F3n_1(i)>max) max=F3n_1(i);
        }
        cout << max << endl;
    }
    return 0;
}
