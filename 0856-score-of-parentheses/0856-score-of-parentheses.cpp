class Solution {
public:
    int scoreOfParentheses(string s) {
        int cnt=0;
        int ans=0;
        int i=0;
        int n=s.size();
       while(i<n){
            if(s[i]=='('){
                cnt++;
            }
            else{
                ans+=(pow(2,cnt-1));
                while(i<n && s[i]==')'){
                    cnt--;
                    i++;
                }
                i--;
            }
            i++;
        }
        return ans;
    }
};