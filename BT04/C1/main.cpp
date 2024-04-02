#include <bits/stdc++.h>

using namespace std;

int const N = 1e4 + 7;
int const base = 1e9 + 7;
int n, d[N], ok = 0;
int main() {
	cin >> n;
	for(int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		if(d[x]) {
			ok = 1;
			break;
		}
		else d[x] = 1;
	}
	if(ok) cout << "Yes";
	else cout << "No";
}