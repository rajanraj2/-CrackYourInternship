// Link - https://leetcode.com/problems/majority-element/
// Majority Element


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int count = 0;

        for (auto it : nums) {
            if (count == 0) {
                el = it;
                count++;
            }
            else if (el == it) {
                count++;
            }
            else {
                count--;
            }
        }
        return el;
    }
};
