// Link - https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
// Minimum moves to make all elements equal II


class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int center = n / 2;
        int result = 0;
        for (int i = 0; i < n; i++) {
            result += abs(nums[i] - nums[center]);
        }
        return result;
    }
};