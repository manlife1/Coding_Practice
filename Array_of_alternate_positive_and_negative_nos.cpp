//  O(N^2) time and O(1) Space Approach(ORDER MAINTAINED)
//User function template for C++
class Solution {
	void rightRotate(int arr[], int n, int outofplace, int cur) {
		int temp = arr[cur];

		for (int i = cur; i > outofplace; i--) {
			arr[i] = arr[i - 1];
		}
		arr[outofplace] = temp;
	}
public:

	void rearrange(int arr[], int n) {
		int outofplace = -1;

		for (int i = 0; i < n; i++) {
			if (outofplace >= 0) {
				if ((arr[i] >= 0 and arr[outofplace] < 0) or (arr[i]<0 and arr[outofplace] >= 0)) {
					rightRotate(arr, n, outofplace, i);

					if (i - outofplace >= 2)
						outofplace = outofplace + 2;
					else
						outofplace = -1;
				}
			}

			if (outofplace == -1) {
				if (((arr[i] >= 0) and (i & 1)) or ((arr[i] < 0) && !(i & 1))) {
					outofplace = i;
				}
			}
		}
	}
};

//O(N) Time and O(N) Space

//User function template for C++
class Solution {
public:

	void rearrange(int arr[], int n) {
		vector<int> po, ne;

		for (int i = 0; i < n; i++) {
			if (arr[i] >= 0) {
				po.push_back(arr[i]);
			} else {
				ne.push_back(arr[i]);
			}
		}
		int k = 0;

		int i = 0;
		int j = 0;
		int x = po.size();
		int y = ne.size();

		while (i < x and j < y) {
			arr[k++] = po[i++];
			arr[k++] = ne[j++];
		}

		while (i < x) {
			arr[k++] = po[i++];
		}

		while (j < y) {
			arr[k++] = ne[j++];
		}
	}
};