// Link - https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/
// Best Time to Buy and Sell Stock II


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int last = 0;
        int result = 0;
        for (int i = 0; i < prices.size(); i++) {
            int profit = prices[i] - prices[last];
            if (profit > 0) {
                result += profit;
            }
            last = i;
        }
        return result;
    }
};