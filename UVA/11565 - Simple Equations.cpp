include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t, a, b, c;
 
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;
 
		bool sol = false;
 
		for (int i = -22; i <= 22 && !sol ; i++)
			if (i * i <= c)
				for (int j = -100; j <= 100 && !sol; j++)
					if (j != i && i * i + j * j <= c)
						for (int k = -100; k <= 100 && !sol ; k++)
							if (k != i && k != j && i + j + k == a
									&& i * j * k == b
									&& i * i + j * j + k * k == c) {
								cout << i <<" "<< j <<" "<< k << endl;
								sol = true;
							}
		if (!sol)
			cout << "No solution." << endl;
	}
 
	return 0;
}
