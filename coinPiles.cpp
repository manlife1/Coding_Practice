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

	while (n--) {
		int a, b;
		cin >> a >> b;

		if ((a + b) % 3 == 0 and 2 * a >= b and 2 * b >= a) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}