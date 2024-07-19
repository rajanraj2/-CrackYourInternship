// Link - https://leetcode.com/problems/generate-parentheses/description/
// Generate Parenthesis


class Solution {
private:
    void backtrack(vector<string>& result, string current, int open, int close, int maxi) {
        if (current.size() == maxi * 2) {
            result.push_back(current);
        }
        if (open < maxi) {
            backtrack(result, current + "(", open + 1, close, maxi);
        }
        if (close < open) {
            backtrack(result, current + ")", open, close + 1, maxi);
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }
};