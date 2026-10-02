class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++) sum+=nums[i];
        if(abs(target)>sum) return 0;
        int x=sum+target;
        if(x%2!=0) return 0;
        x=x/2;
        vector<vector<int>>dp(n+1,vector<int>(x+1,0));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=x;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][x];
    }
};