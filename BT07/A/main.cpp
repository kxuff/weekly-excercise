// code by kxuff
// mu no.1 :))

#include <bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define PB push_back
#define pii pair <int,int>
#define ll long long
#define FOR(i, a, b) for(int i = a ; i <= b ; i++)
#define ReFOR(i, a, b) for(int i = a ; i >= b ; i--)
#define MASK(x)  (1ll << (x))
#define getbit(x,k) ((x>>k)&1)
#define BITOFF(x,k) ((x) & ~(1ll << (k)))
#define BITON(x,k)  ((1ll << (k)) | (x))
#define CNT(k) __builtin_popcount(k)
#define task "kx"
using namespace std;

ll const N = 1007;
ll const base = 1e9 + 7;

int n, a[N];
int count_even(int *a, int n) {
	int cnteven = 0;
	for(int i = 0; i <= n - 1; i++) 
		if(a[i] % 2 == 0) cnteven++;
	return cnteven;
}
int binary_A4(int *a, int n, int ans) {
	int left = 0, right = n - 1;
	while(left < right) {
		int mid = (left + right) / 2;
		if(a[mid] < ans) left = mid + 1;
		else if(a[mid] > ans) right = mid - 1;
		else return mid;
	}
	return -1;
}
char* weird_string() { 
   char c[] = "123345";
   return c; 
}
void A3() {
	cin >> n;
    for(int i = 0; i <= n - 1; i++)
    	cin >> a[i];
    int ans = count_even(a, 5);
    int ans1 = count_even(a + n - 5, 5);
    cout << ans << " " << ans1;
}
void A5() {
	char* ans = weird_string();
	cout << ans;
}
int main(int argc, const char *argv[]) {
	const char *s1 = argv[1];
    const char *s2 = argv[2];
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    int ans = 0;
    for(int i = 0; i < len2 - len1; i++) {
    	string tmp;
    	if(strcmp(s1,tmp) == 0) ans++;
    }
    cout << ans;
}