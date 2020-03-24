#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 600;

int main() {
    string s1,s2;
    while(cin >> s1) {
        cin >> s2;

        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        int arr[MAX_N];
        memset(arr, 0, sizeof(arr));

        for (int i = 0; i < s1.length(); i++) {
            for (int j = 0; j < s2.length(); j++) {
                arr[i + j] += (s1[i] - '0') * (s2[j] - '0');
            }
        }

        for (int k = 0; k < MAX_N - 1; ++k) {
            arr[k + 1] += arr[k] / 10;
            arr[k] = arr[k] % 10;
        }

        int i = MAX_N - 1;
        while(i > 0 && arr[i] == 0) i--;
        for (; i >= 0 ; --i) cout << arr[i];
        cout << endl;
    }
}
