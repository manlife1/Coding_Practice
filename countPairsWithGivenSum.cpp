//User function template for C++
// I firstly used two pointers approach but it created problem with repeated elemensts
class Solution {
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        int ans = 0;

        for (int i = 0; i < n; i++) {
            ans += mp[k - arr[i]]; //thhis is double of required ans

            if (k - arr[i] == arr[i]) { //the numbers should be different
                ans--;
            }
        }
        return ans / 2;
    }
};