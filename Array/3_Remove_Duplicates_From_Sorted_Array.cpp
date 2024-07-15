// Link - https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1201508843/
// Remove Duplicates from Sorted Array


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last = 0;
        int index = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[++last] = nums[i];
            }
        }
        return last + 1;
    }
};