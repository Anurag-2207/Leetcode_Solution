
class Solution {
public:
    int length(vector<int>& nums, int t, int n,vector<vector<int>>& dp) {
        if (t == 0) return 0;
        if (n == 0) return -1;
            if(dp[n][t]!=-2){
                return dp[n][t];
            }
            int nottake=length(nums,t,n-1,dp);
            int take=-1;
        if (nums[n - 1] <= t) {
           int res = length(nums, t - nums[n - 1], n - 1, dp);
            if (res != -1)
                take = 1 + res;
        }
        return dp[n][t]=max(take,nottake);
    }

    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        vector<vector<int>>dp(nums.size()+1,vector<int>(target+1,-2));
        return length(nums, target, nums.size(),dp);
    }
};
