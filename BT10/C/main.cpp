#include <bits/stdc++.h>
using namespace std;

char* reverse(const char* a) {
	int len = strlen(a);
	char* ans = new char[len + 1];
	for (int i = 0; i < len; i++) {
	ans[len - i - 1] = a[i];
	}
	ans[len] = '\0';
	return ans;
}
char* delete_char(const char* a, char c) {
	int len = strlen(a);

	int cnt = 0;
	for (int i = 0; i < len; i++) {
		if (a[i] == c) {
		  	cnt++;
		}
	}
	int resultLen = len - cnt;
	char* ans = new char[resultLen + 1];
	int j = 0;
	for (int i = 0; i < len; i++) {
		if (a[i] != c) {
		  	ans[j++] = a[i];
		}
	}
	ans[resultLen] = '\0';
	return ans;
}
char* pad_right(const char* a, int n) {
	int len = strlen(a);
	if (len >= n) return const_cast<char*>(a); 
	char* ans = new char[n + 1];
	memcpy(ans, a, len);
	for (int i = len; i < n; i++) {
		ans[i] = ' ';
	}
	ans[n] = '\0';
	return ans;
}
char* pad_left(const char* a, int n) {
	int len = strlen(a);
	char* ans = new char[n + 1];
	if (len >= n) return const_cast<char*>(a);
	int cnt = n - len;
	for (int i = 0; i < cnt; i++) ans[i] = ' ';
	memcpy(ans + cnt, a, len);
	ans[n] = '\0';
	return ans;
}
char* truncate(const char* a, int n) {
	int len = strlen(a);
	char* ans = new char[n + 1];
	if (len <= n) return const_cast<char*>(a); 
	memcpy(ans, a, n);
	ans[n] = '\0';
	return ans;
}
char* trim_left(const char* a) {
	int id = 0, len = strlen(a);
	while (isspace(a[id])) {
		id++;
	}
	if (id == len) return const_cast<char*>(" ");
	char* ans = new char[strlen(a) - id + 1];
	strcpy(ans, a + id);
	return ans;
}
char* trim_right(const char* a) {
	int len = strlen(a), id = len - 1;
	while (isspace(a[id])) {
		id--;
	}
	if (id < 0) return const_cast<char*>(" "); 
	char* ans = new char[id + 1];
	memcpy(ans, a, id + 1);
	ans[id + 1] = '\0';
	return ans;
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}