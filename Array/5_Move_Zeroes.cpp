// Link - https://leetcode.com/problems/move-zeroes/description/
// Move Zeroes


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int last0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {        
            if (nums[i] == 0) {
                last0 = i;
                break;
            }
        }
        for (int i = last0 + 1; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[last0], nums[i]);
                last0++;
            }
        }
    }
};