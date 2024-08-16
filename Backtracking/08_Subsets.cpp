// Link - https://leetcode.com/problems/subsets/
// Subsets


class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> path;
        backtrack(nums, 0, path, result);
        return result;
    }

    void backtrack(vector<int>& nums, int start, vector<int>& path, vector<vector<int>>& result) {
        result.push_back(path);

        for (int i = start; i < nums.size(); i++) {
            path.push_back(nums[i]);
            backtrack(nums, i + 1, path, result);
            path.pop_back();
        }
    }
};


// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> sets;
//         int n = nums.size();
//         int subsetsCount = 1 << n;

//         for (int i = 0; i < subsetsCount; i++) {
//             vector<int> subset;
//             for (int j = 0; j < n; j++) {
//                 if (i & (1 << j)) {
//                     subset.push_back(nums[j]);
//                 }
//             }
//             sets.push_back(subset);
//         }
        
//         return sets;
//     }
// };