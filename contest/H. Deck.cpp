// https://codeforces.com/contest/701/problem/A
// A. Cards

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i];
    }

    sum /= (n/2) ;

    bool visited[n];
    memset(visited,false,sizeof(visited));

    for (int i = 0; i < n; ++i) {
        if(visited[i]) continue;
        for (int j = 0; j < n; ++j) {
            if(i==j || visited[j])
                continue;
            if( v[i] + v[j] == sum) {
                cout << i + 1 << " " << j + 1 << endl;
                visited[i] = true;
                visited[j] = true;
                break;
            }
        }
    }
}
