class Solution {
public:
    int maxProfit(vector<int>& prices) {//maintain minimum on the left
        int n = prices.size();
        if (n == 0) {
            return 0;
        }
        int minE = INT_MAX;
        int maxPro = 0;

        for (int i = 0; i < n; i++) {
            minE = min(minE, prices[i]);
            maxPro = max(maxPro, prices[i] - minE);
        }
        return maxPro;
    }
};