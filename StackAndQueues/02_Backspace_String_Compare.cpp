// Link - https://leetcode.com/problems/backspace-string-compare/
// Backspace String Compare


class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, s2;
        for (auto it : s) {
            if (it == '#' && !s1.empty()) {
                s1.pop();
            }
            else if (it != '#') {
                s1.push(it);
            }
        }

        for (auto it : t) {
            if (it == '#' && !s2.empty()) {
                s2.pop();
            }
            else if (it != '#') {
                s2.push(it);
            }
        }

        while (!s1.empty() && !s2.empty()) {
            if (s1.top() != s2.top()) {
                return false;
            }
            s1.pop();
            s2.pop();
        }

        return s1.empty() && s2.empty();    
    }
};