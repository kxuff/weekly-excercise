#include <bits/stdc++.h>

using namespace std;
int t;
int Check(int x) {
	string s;
	while(x != 0) {
		s = s + char(x % 10 + '0');
		x /= 10;
	}
	int len = s.size();
	for(int i = 0 ; i <= len - 1; i++)
		if(s[i] != s[len - 1 - i]) return 0;
	return 1;
}
int main() {
	cin >> t;
	while(t--) {
		int x, y, ans = 0;
		cin >> x >> y;
		for(int i = x; i <= y; i++) if(Check(i)) ans++;
		cout << ans << '\n';
	}
}