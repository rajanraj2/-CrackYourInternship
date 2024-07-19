// Link - https://leetcode.com/problems/valid-palindrome-ii/
// Valid Palindrome II


class Solution {
private:
    bool isValid(string s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

public:
    bool validPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                return (isValid(s, left + 1, right) || isValid(s, left, right - 1));
            }
            left++;
            right--;
        }
        return true;
    }
};