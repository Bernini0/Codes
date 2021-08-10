#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
 
#define bt(x) (1LL << (x))
#define all(x) (x).begin(), (x).end()
#define FastIO ios::sync_with_stdio(false); cin.tie(0);
 
const int inf = 0x3f3f3f3f;
const ll INF = 2e18;
 
const ll MOD = 1e9 + 7;
 
ll pwr(ll a, ll p, ll m = MOD) {
	if(a >= m) a %= m;
	ll ret = 1;
	while(p > 0) {
		if(p & 1) ret = (ret * a) % m;
		a = (a * a) % m;
		p >>= 1;
	}
	return ret;
}
 
int main() {
	int t;
	cin >> t;
 
	while(t--) {
		int n, k;
		cin >> n >> k;
 
		if(k == 0) {
			cout << "1\n";
			continue;
		}
 
		if(n % 2) {
			ll once = (pwr(2, n - 1) + 1) % MOD;
			ll res = pwr(once, k);
			cout << res << "sfsa" << "\n";
		}
		else {
			ll even_ones = (pwr(2, n - 1) - 1 + MOD) % MOD;	// except all ones
			ll anything = pwr(2, n);
			ll res = pwr(even_ones, k);
 
			for(int i=0; i<k; ++i) {
				ll cur = 1;
				if(i > 0) cur = (cur * pwr(anything, i)) % MOD;
				if(i + 1 < k) cur = (cur * pwr(even_ones, k - i - 1)) % MOD;
				res = (res + cur) % MOD;
			}
			cout << res << "\n";
		}
	}
 
	return 0;
}