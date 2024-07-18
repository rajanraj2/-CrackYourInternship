// Link - https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
// Maximum Points You Can Obtain from Cards


class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }
        int ans = sum;
        k--;
        int i = cardPoints.size() - 1;
        while (k >= 0) {
            sum = sum - cardPoints[k] + cardPoints[i];
            k--;
            i--;
            ans = max(ans, sum);
        }
        return ans;
    }
};


// class Solution {
// public:
//     int maxScore(vector<int>& cardPoints, int k) {
//         int n = cardPoints.size();
//         int totalSum = accumulate(cardPoints.begin(), cardPoints.end(), 0);
//         if (k == n) return totalSum;

//         int windowSize = n - k;
//         int currWinSum = accumulate(cardPoints.begin(), cardPoints.begin() + windowSize, 0);
//         int minWinSum = currWinSum;

//         for (int i = windowSize; i < n; i++) {
//             currWinSum += cardPoints[i] - cardPoints[i - windowSize];
//             minWinSum = min(currWinSum, minWinSum);
//         }
//         return totalSum - minWinSum;
//     }
// };