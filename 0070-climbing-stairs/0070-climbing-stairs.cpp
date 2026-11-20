class Solution {
public:
    int climbStairs(int n) {
        int pre=0;
        int pre1=1;
        if(n<=1) return n;
        for(int i=1;i<=n;i++){
            int curri=pre1+pre;
            pre=pre1;
            pre1=curri;
        }
        return pre1;
    }
};