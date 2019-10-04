#include <bits/stdc++.h>
using namespace std;

int findIndex(int p, int arr[]) {
	int i;
	for (i = 0; i < 8; i++) {
		if (arr[i] == p)
			break;
	}
	return i;
}

int main() {
	int n,m;
	int constraints[20][3];

	while(scanf("%d %d" , &n, &m), n||m ){
            for(int i=0 ; i<m ;i++){
                cin >> constraints[i][0] >> constraints[i][1] >> constraints[i][2] ;
            }

            int p[8] = {0 ,1 ,2 ,3 ,4 ,5 ,6 ,7};
            int ans = 0;
            do{
                bool state = true ;
                for(int i=0 ; i < m ; i++){

                    int p1 = findIndex(constraints[i][0],p);
                    int p2 = findIndex(constraints[i][1],p);

                    if(constraints[i][2] > 0){
                        if(  abs(p1-p2) > constraints[i][2] ){
                            state = false ;
                            break;
                        }
                    }
                    if(constraints[i][2] < 0){
                        if( abs(p1-p2) < (-constraints[i][2])){
                            state = false ;
                            break;
                        }
                    }
                }
                if(state) ans++;
            }while(next_permutation(p,p+n));
            cout << ans << endl;
	}
	return 0;
}
