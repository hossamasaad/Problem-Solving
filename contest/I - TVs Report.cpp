// https://codeforces.com/problemset/problem/262/B
// B. Roma and Changing Signs

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,input,sum=0;
    cin >> n >> k;

    vector<int> v;

    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        if (input<0 && k>0){
            input *= -1;
            k--;
        }
        v.push_back(input);
    }
    sort(v.begin(),v.end());

    if(k%2==0){
        for (int i = 0; i < n; ++i) {
            sum += v[i];
        }
    }
    else{
        sum = -1 * v[0];
        for (int i = 1; i < n; ++i){
            sum += v[i];
        }
    }
    cout << sum;
}
 
