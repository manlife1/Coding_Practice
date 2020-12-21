#include <bits/stdc++.h>
using namespace std;

#define int long long int

string s[8];
bool b[15];

int32_t main() {
// #ifndef ONLINE_JUGDE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	for (int i = 0; i < 8; i++) {
		cin >> s[i];
	}

	int p[8], ans = 0;
	iota(p, p + 8, 0);

	do {
		bool ok = 1;

		for (int i = 0; i < 8; i++)
			ok &= s[i][p[i]] == '.';
		memset(b, 0, 15);
		for (int i = 0; i < 8; i++) {
			if (b[i + p[i]]) {
				ok = 0;
			}
			b[i + p[i]] = 1;
		}
		memset(b, 0, 15);
		for (int i = 0; i < 8; i++) {
			if (b[i - p[i] + 7]) {
				ok = 0;
			}
			b[i + 7 - p[i]] = 1;
		}
		ans += ok;
	} while (next_permutation(p, p + 8));

	cout << ans << endl;

	return 0;
}