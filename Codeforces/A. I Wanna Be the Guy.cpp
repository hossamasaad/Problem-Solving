#include <iostream>
#include <set>
#define ll long long
using namespace std;

int main() {
    int n,p,q,x;
    set<int> mySet;
    cin >> n;
    cin >> q;
    for(int i=0 ; i<q ;i++){
        cin >> x;
        mySet.insert(x);
    }
    cin >> p;
    for(int i=0 ; i<p ;i++){
        cin >> x;
        mySet.insert(x);
    }
    if(mySet.size()==n) cout << "I become the guy." ;
    else cout << "Oh, my keyboard!" << endl;
}
