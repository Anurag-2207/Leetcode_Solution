class Solution {
public:
    string reverseParentheses(string s) {
        vector<string>st;
        string curr="";
        for(char c:s){
            if(c=='('){
                st.push_back(curr);
                curr="";

            }
            else if(c==')'){
                reverse(curr.begin(),curr.end());
                string prev=st.back();
                st.pop_back();
                curr=prev+curr;
            }
            else{
                curr+=c;
            }
        }
        return curr;
    }
};