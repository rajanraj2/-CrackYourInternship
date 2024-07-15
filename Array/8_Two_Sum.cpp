// Link - https://leetcode.com/problems/two-sum/description/
// Two Sum


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            if (mpp.find(nums[i]) != mpp.end()) {
                return {mpp[nums[i]], i};
            }
            int req = target - nums[i];
            mpp[req] = i;
        }
        return {-1, -1};
    }
};