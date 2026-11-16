class Solution {
public:
    string digitSum(string s, int k) {
        string ans=s;
        while(ans.size()>k){
        int n=s.size();
        int i=0;
        ans="";
        while(i<n){
            int x=k;
            int z=0;
            while(i<n && x--){
                z+=s[i]-'0';
                i++;
            }
            ans+=(to_string(z));
        }
        s=ans;
        }
        return ans;
    }
};