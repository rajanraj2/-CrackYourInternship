// Link - https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
// Find All Duplicates in an Array


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for (auto it : nums) {
            it = abs(it);
            if (nums[it - 1] < 0) result.push_back(it);
            nums[it - 1] *= -1;
        }
        return result;
    }
};