/*
 * Hossam
 */
 #include <bits/stdc++.h>
using namespace std;

vector<int> vc(5);
bool solve(int total, int idx) {

    // base case
    if (idx == 5) return (total == 23);

    bool ret = false;
    // Recursive calls
    ret |= solve(total + vc[idx], idx + 1);
    ret |= solve(total - vc[idx], idx + 1);
    ret |= solve(total * vc[idx], idx + 1);
    return ret;
}

int main() {
    while (cin>>vc[0]>>vc[1]>>vc[2]>>vc[3]>>vc[4]) {
        if (!accumulate(vc.begin(), vc.end(), 0)) break;

        bool possible = false;
        sort(vc.begin(), vc.end());
        do {
            possible |= solve(vc[0], 1);
        } while (next_permutation(vc.begin(), vc.end()));

        cout << (possible ? "Possible" : "Impossible") << endl;
    }
}
