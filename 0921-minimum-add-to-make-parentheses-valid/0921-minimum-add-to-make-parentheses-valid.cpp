class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        int cnt=0;
        int i=0;
        int ans=0;
        while(i<s.size()){
            if(s[i]=='(') cnt++;
            else cnt--;
            if(cnt<0){
                while(i<n && s[i]==')'){
                    ans++;
                    i++;
                }
                i--;
                cnt=0;
            }
            i++;
        }
        return ans+cnt;
    }
};