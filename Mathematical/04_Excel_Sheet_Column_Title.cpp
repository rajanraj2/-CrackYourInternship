// Link - https://leetcode.com/problems/excel-sheet-column-title/
// Excel Sheet Column Title


class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        while (columnNumber > 0) {
            columnNumber--;
            int rem = columnNumber % 26;
            result += ('A' + rem);
            columnNumber /= 26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};