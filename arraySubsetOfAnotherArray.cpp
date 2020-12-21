#include<bits/stdc++.h>
using namespace std;

bool isSubset(int arr1[], int m,
              int arr2[], int n)
{
	// Create a Frequency Table using STL
	map<int, int> frequency;

	// Increase the frequency of each element
	// in the frequency table.
	for (int i = 0; i < m; i++)
	{
		frequency[arr1[i]]++;
	}
	// Decrease the frequency if the
	// element was found in the frequency
	// table with the frequency more than 0.
	// else return 0 and if loop is
	// completed return 1.
	for (int i = 0; i < n; i++)
	{
		if (frequency[arr2[i]] > 0)
			frequency[arr2[i]]--;
		else
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int t;
	cin >> t;

	while (t--) {
		int m, n;
		cin >> m >> n;


		int arr1[m];
		int arr2[n];

		for (int i = 0; i < m; i++) {
			cin >> arr1[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> arr2[i];
		}

		bool ans = isSubset(arr1, m, arr2, n);

		if (ans == 1) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}