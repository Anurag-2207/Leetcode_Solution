class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minidx=-1;
        int maxidx=-1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                maxidx=i+1;
            }
            if(nums[i]<mini){
                mini=nums[i];
                minidx=i+1;
            }
        }
       int x=min(maxidx,n+1-maxidx);
       int y=min(minidx,n+1-minidx);
       int z=max(minidx,maxidx);
       int w=n+1-min(minidx,maxidx);
       return min({x+y,z,w});
    }
};