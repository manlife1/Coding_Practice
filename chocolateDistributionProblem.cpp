/*
 An efficient solution is based on the observation that to minimize
 the difference, we must choose consecutive elements from a sorted packet.
 We first sort the array arr[0..n-1], then find the subarray of size m with
 the minimum difference between the last and first elements.
*/


#include<bits/stdc++.h>
using namespace std;


int candy(int arr[], int n, int k) {
	if (n == 0 || k == 0) {
		return 0;
	}

	sort(arr, arr + n);

	if (n < k) {
		return -1;
	}

	int min_diff = INT_MAX;

	for (int i = 0; i + k - 1 < n; i++) {
		int diff = arr[i + k - 1] - arr[i];
		if (diff < min_diff) {
			min_diff = diff;
		}
	}
	return  min_diff;
}
int main()
{
	int t;
	cin >> t;


	while (t--) {
		int n, k;
		cin >> n;

		int arr[n];

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		cin >> k;

		cout << candy(arr, n, k) << endl; //https://media.geeksforgeeks.org/img-practice/play-1596780125.svg


	}
	return 0;
}