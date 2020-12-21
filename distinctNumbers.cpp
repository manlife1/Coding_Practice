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

	set<int> mp;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		mp.insert(t);
	}
	cout << mp.size() << endl;
	return 0;
}