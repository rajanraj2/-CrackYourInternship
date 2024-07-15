// Link - https://leetcode.com/problems/find-the-duplicate-number/
// Find the Duplicate Number


// Slow and fast pointer approach 

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return  slow;
    }
};

// Binary search approach

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int left = 1;
//         int right = nums.size() - 1;

//         while (left < right) {
//             int mid = left + (right - left) / 2;
//             int count = 0;

//             for (int num : nums) {
//                 if (num <= mid) {
//                     count++;
//                 }
//             }

//             if (count > mid) {
//                 right = mid;
//             }
//             else {
//                 left = mid + 1;
//             }
//         }
//         return left;
//     }
// };


// Sorting approach

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int result;
//         sort(nums.begin(), nums.end());
//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] == nums[i - 1]) {
//                 result = nums[i];
//             }
//         }
//         return result;
//     }
// };


// Set approach

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         set<int> st;
//         int result;
//         for (auto it : nums) {
//             if (st.find(it) != st.end()) {
//                 result = it;
//                 break;
//             }
//             else {
//                 st.insert(it);
//             }
//         }
//         return result;
//     }
// };


// Hashmap approach

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         map<int, int> freq;
//         int result;
//         for (auto it : nums) {
//             if (freq.find(it) != freq.end()) {
//                 result = it;
//                 break;
//             }
//             else {
//                 freq[it] = 1;
//             }
//         }
//         return result;
//     }
// };