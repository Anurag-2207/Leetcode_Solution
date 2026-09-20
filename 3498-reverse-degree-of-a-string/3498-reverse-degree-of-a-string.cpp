class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int idx=s[i]-'a';
            idx-=26;
            ans+=(idx*(i+1));
        }
        return (-1)*ans;
    }
};