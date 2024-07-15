// Link - https://leetcode.com/problems/subarray-sums-divisible-by-k/description/
// Subarray Sums Divisible by K


class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0, sum = 0;
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int rem = sum % k;
            if (rem < 0) rem += k;
            if (mpp.find(rem) != mpp.end()) {
                count += mpp[rem];
            }
            mpp[rem]++;
        }
        return count;
    }
};