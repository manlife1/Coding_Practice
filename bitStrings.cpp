#include <bits/stdc++.h>
using namespace std;

#define int long long int



int32_t main() {
// #ifndef ONLINE_JUGDE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n;
	cin >> n;

	int ans = 1;

	for (int i = 0; i < n; i++) {
		ans = (ans * 2) % (1000000007);
	}
	cout << ans << endl;
	return 0;
}