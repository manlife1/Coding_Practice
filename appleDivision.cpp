#include <bits/stdc++.h>
using namespace std;

#define int long long int



int32_t main() {
// #ifndef ONLINE_JUGDE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n, sum = 0, ans = 0;
	cin >> n;

	int p[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		sum += p[i];
	}

	for (int i = 0; i < (1 << n); i++) {
		int cs = 0;

		for (int j = 0; j < n; j++) {
			if (i >> j & 1) {
				cs += p[j];
			}
		}

		if (cs <= sum / 2) {
			ans = max(ans, cs);
		}
	}
	cout << sum - 2 * ans << endl;

	return 0;
}