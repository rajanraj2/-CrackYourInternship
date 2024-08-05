// Link - https://www.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1
// Evaluation of Postfix Expression


class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        int n = s.size();
        int i = 0;
        stack<int> st;
        while (i < n) {
            if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-') {
                int t1 = st.top();
                st.pop();
                int t2 = st.top();
                st.pop();
                int result = 0;
                
                switch (s[i]) {
                    case '+' : result = t2 + t1; break;
                    case '-' : result = t2 - t1; break;
                    case '*' : result = t2 * t1; break;
                    case '/' : result = t2 / t1; break;
                }
                
                st.push(result);
            }
            else {
                st.push(s[i] - '0');
            }
            i++;
        }
        return st.top();
    }
};