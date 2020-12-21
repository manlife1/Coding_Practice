// Function to find element with count more than n/k times
// arr: input array


int countOccurence(int arr[], int n, int k) {
    int maxE = INT_MIN;
    for (int i = 0; i < n; i++) {
        maxE = max(maxE, arr[i]);
    }

    int freq[maxE + 1] = {0};

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    int ans = 0;
    for (int i = 0; i <= maxE; i++) {
        if (freq[i] > n / k) {
            ans++;
        }
    }
    return ans;
}