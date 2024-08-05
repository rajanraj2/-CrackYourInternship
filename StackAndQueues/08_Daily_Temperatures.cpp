// Link - https://leetcode.com/problems/daily-temperatures/description/
// Daily Temperatures


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> arr(n, 0);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int index = st.top();
                st.pop();
                arr[index] = i - index;
            }
            st.push(i);
        }

        return arr; 
    }
};