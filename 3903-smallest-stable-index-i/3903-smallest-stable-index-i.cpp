class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>premax;
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi) maxi=nums[i];
            premax.push_back(maxi);
        }
        vector<int>postmin;
        int mini=nums[nums.size()-1];
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<mini) mini=nums[i];
            postmin.push_back(mini);
        }
        reverse(postmin.begin(),postmin.end());
        for(int i=0;i<nums.size();i++){
            int x=premax[i]-postmin[i];
            if(x<=k){
                return i;
            }
        }
        return -1;
    }
};