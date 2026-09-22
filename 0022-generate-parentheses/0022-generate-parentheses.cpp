class Solution {
public:
    void back(string curr,vector<string> &ans,int open,int close,int n){
        if(curr.length()==2*n){
            ans.push_back(curr);
            return;
        }
        if(open < n){
            back(curr+'(',ans,open+1,close,n);
        }
        if(close<open){
            back(curr+')',ans,open,close+1,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        back("",ans,0,0,n);
        return ans;
    }
};