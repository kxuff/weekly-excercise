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
 
int const N = 1e5 + 7;
ll const base = 1e9 + 7;
int s[N], n;
void sangnt() {
	for(int i = 2; i * i <= N - 7; i++) {
		if(s[i] == 0) {
			for(int j = 2 * i; j <= N - 7; j += i) s[j] = 1;
		}
	}
}
void Solve() {
	cin >> n;
	sangnt();
	if(s[n]) cout << "no";
	else cout << "yes";
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