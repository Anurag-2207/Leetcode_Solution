class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        int bal=0;
        int curr=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]==')') bal--;
            else bal++;
            curr++;
            if(bal<0){
                bal=0;
                curr=0;
            }
            else if(bal==0){
                ans=max(ans,curr);
            }
        }
        bal=0;
        curr=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='(') bal--;
            else bal++;
            curr++;
            if(bal<0){
                bal=0;
                curr=0;
            }
            else if(bal==0){
                ans=max(ans,curr);
            }
        }
        return ans;
    }
    
};