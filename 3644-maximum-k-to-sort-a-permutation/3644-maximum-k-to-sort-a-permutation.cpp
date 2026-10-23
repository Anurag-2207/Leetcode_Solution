class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        if(is_sorted(nums.begin(),nums.end())) return 0;
        int maxi=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==i) continue;
            maxi&=nums[i];
        }
        return maxi;
    }
};