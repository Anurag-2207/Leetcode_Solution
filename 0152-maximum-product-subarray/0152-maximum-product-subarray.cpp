class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int prefix=1;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                prefix*=nums[i];
                maxi=max(prefix,maxi);
            }
            else{
                prefix=1;
                maxi=max(0,maxi);
            }
            
        }
        int suffix=1;
        for(int i=n-1;i>=0;i--){
            if(nums[i]!=0){
                suffix*=nums[i];
                 maxi=max(maxi,suffix);
            }
            else{
                suffix=1;
                 maxi=max(maxi,0);
            }
           
        }
        return maxi;
    }
};