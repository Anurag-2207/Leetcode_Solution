class Solution {
public:
    bool canJump(vector<int>& nums) {
        long long n=nums.size();
        vector<long long>dp(n,INT_MAX);
        dp[0]=0;
        for(long long i=0;i<n;i++){
            for(long long j=1;j<=nums[i] && i+j<n;j++){
                dp[i+j]=min(dp[i+j],1+dp[i]);
            }
    }
        if(dp[n-1]==INT_MAX) return false;
        return true;
    }
};