class Solution {
public:
    bool judgeCircle(string s) {
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='U') cnt1++;
            else if(s[i]=='D') cnt1--;
            else if(s[i]=='L') cnt2--;
            else cnt2++;
        }
        return cnt1==0 && cnt2==0;
    }
};