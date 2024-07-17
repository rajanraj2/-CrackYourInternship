// Link - https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
// Find the index of the first occurrence of a string in another string


class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int i = 0;
        while (i <= n - m) {
            if (haystack.substr(i, m) == needle) return i;
            i++;
        }
        return -1;
    }
};