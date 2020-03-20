// A. Little Artem and Grasshopper

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n; string s;
    cin >> n >> s;

    bool visited[n];
    memset(visited,false,sizeof(visited));
    int dis[n];

    for (int i = 0; i < n; ++i) {
        cin >> dis[i];
    } 

    int i=0;
    while( i>=0 && i<n ){
        if(visited[i]){
            cout << "INFINITE" << endl;
            return 0;
        }
        
        visited[i] = true;
        if(s[i]=='>'){
            i += dis[i];
        }
        
        else if(s[i]=='<'){
            i -= dis[i];
        }
    }
    cout << "FINITE";
    return 0;
}
