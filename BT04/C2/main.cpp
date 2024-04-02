#include <bits/stdc++.h>

using namespace std;

string s;
int main() {
	cin >> s;
	int len = s.size(), ok;
	for(int i = 0; i < len; i++) if(s[i] != s[len - i - 1]) {
		ok = 1;
		break;
	}
	if(ok) cout << "No";
	else cout << "Yes";
}