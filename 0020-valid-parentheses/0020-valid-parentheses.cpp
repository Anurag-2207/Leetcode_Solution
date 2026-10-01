class Solution {
public:
    bool isValid(string s) {
        int x = s.size();
        if (x % 2 != 0)
            return false;
        stack<int> st;
        for (auto it : s) {
            if (it == '(' || it == '{' || it == '[') {
                st.push(it);
            } else {
                if (st.size() == 0)
                    return false;
                char ch = st.top();
                st.pop();
                if ((ch == '(' && it == ')') || (ch == '{' && it == '}') ||
                    (ch == '[' && it == ']')) {
                    continue;
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};