#include <bits/stdc++.h>
using namespace std;

#define int long long int



int32_t main() {
// #ifndef ONLINE_JUGDE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	string a;
	cin >> a;

	sort(a.begin(), a.end());
	vector<string> v;

	do {
		v.push_back(a);
	} while (next_permutation(a.begin(), a.end()));

	cout << v.size() << endl;

	for (string s : v) {
		cout << s << endl;
	}

	return 0;
}