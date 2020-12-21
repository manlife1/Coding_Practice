#include <bits/stdc++.h>
using namespace std;

#define int long long int


int32_t main() {
// #ifndef ONLINE_JUGDE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n, x;
	cin >> n >> x;

	int p[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	sort(p, p + n);
	int ans = 0;

	for (int i = 0, j = n - 1; i < j;) {
		while (i < j and p[i] + p[j] > x) {
			j--;
		}

		if (i >= j) {
			break;
		}
		ans++;
		i++;
		j--;
	}
	cout << n - ans;
	return 0;
}