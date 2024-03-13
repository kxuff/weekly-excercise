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
 
int const N = 1e6 + 7;
ll const base = 1e9 + 7;
string s;
void Solve() {
	cin >> s;
	int len = 1, cnt = 1, ans = 0, n = s.size();
	for(int i = 0; i < n; i++) {
		if(s[i] != s[i + 1]) {
			if(len > 1) ans += cnt;
			else ans += cnt - 1;
			len = 1;
			cnt++;
		}
		else len++;
	}
	int i = 0; 
	while(i < n - 1) {
		if(s[i] != s[i + 1]) {
			len = 2;
			while(i + len < n && s[i + len] == s[i + (len % 2)])
				len++;
			ans -= len - 2;
			i += len - 1;
			continue;
		}
		i++;
	}
	cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen(task".inp" , "r" , stdin);
    //freopen(task".out" , "w" , stdout);
    Solve();
}