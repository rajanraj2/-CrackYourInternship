// Link - https://www.geeksforgeeks.org/problems/all-unique-permutations-of-an-array/0
// All Unique Permutations of an Array


class Solution {
  private:
    void backtrack(vector<int>& arr,vector<vector<int>> &result, vector<int> current, vector<bool>& used) {
        if (current.size() == arr.size()) {
            result.push_back(current);
            return;
        }
        
        for (int i = 0; i < arr.size(); i++) {
            if (used[i] || (i > 0 && arr[i] == arr[i - 1] && !used[i - 1])) {
                continue;
            }
            used[i] = true;
            current.push_back(arr[i]);
            backtrack(arr, result, current, used);
            current.pop_back();
            used[i] = false;
        }
    }
    
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        vector<vector<int>> result;
        vector<int> current;
        vector<bool> used(n, false);
        sort(arr.begin(), arr.end());
        backtrack(arr, result, current, used);
        return result;
    }
};