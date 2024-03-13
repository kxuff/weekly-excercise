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
int n;
void Solve() {
	cin >> n;
	int len = 1;
	FOR(i , 1 , n) {
		FOR(j , 1 , (n - 1) - i + 1) cout << " ";
		FOR(j , n  - i + 1 , n - i + len) cout << "*";
		FOR(j , n - i + len + 1 , n - i + len + 1 + (n - 2)) cout << " ";
		len += 2;
		cout << '\n';
	}
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