#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll fast_power(ll a, ll n, ll mod) {
	ll ans = 1;
	a%=mod;
	while (n) {
		if (n&1) { //次数是奇数 n&1 ： 判断次数奇偶性
			ans = (ans*a)%mod;
			a = (a*a)%mod;
			n = n/2;
		} else { //次数是偶数
			a = (a*a)%mod;
			n = n>>1; // n = n/2;
		}
	}
	return ans;
}
void solve() {
	ll l,r,k;
	ll mod = 1000000000+7;
	cin >> l >> r >> k;
	ll num = 9/k + 1;
	ll numl=fast_power(num,l,mod), numr=fast_power(num,r,mod);
	if ((numr-numl)%mod>=0) cout << (numr-numl)%mod << "\n";
	else cout << (numr-numl)%mod+mod << "\n";
}
signed main() {
	int t; cin >> t;
	while (t--) solve();
}