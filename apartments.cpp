#include <bits/stdc++.h>
using namespace std;

#define int long long int


int32_t main() {
// #ifndef ONLINE_JUGDE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n, m, k;

	cin >> n >> m >> k;
	int a[n];
	int b[m];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + m);
	int ans = 0;

	for (int i = 0, j = 0; i < n; i++) {
		while (j < m and b[j] < (a[i] - k)) {
			j++;
		}

		if (j < m and b[j] <= (a[i] + k)) {
			ans++; j++;
		}
	}

	cout << ans;



	return 0;
}