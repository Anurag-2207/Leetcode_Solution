class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=nums[0];
        int cnt0=0;
        for(int i=1;i<nums.size();i++){
            x^=nums[i];
            if(nums[i]==0) cnt0++;
        }
        if(x!=0) return nums.size();
        if(cnt0==nums.size()-1 && nums[0]==0) return 0;
        return  nums.size()-1;
    }
};