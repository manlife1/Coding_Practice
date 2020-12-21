#include<bits/stdc++.h>
using namespace std;

#define int long long int
int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	int mx = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		mx = max(mx, x);
		cnt += (mx - x);
	}

	cout << cnt << endl;


	return 0;
}