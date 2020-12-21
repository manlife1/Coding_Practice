#include <bits/stdc++.h>
using namespace std;

#define int long long int

string s;
bool visited[7][7];
int ans;

void dfs(int i, int j, int a = 0) {
	if (i == 6 and j == 6) {
		if (a == 48) {
			ans++;
		}
		return;
	}


}
int32_t main() {
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	cin >> s;
	dfs(0, 0);
	cout << ans << endl;
	return 0;
}