class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int fir=nums[0];
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==fir){
                fir++;
            }
            else{
                ans.push_back(fir);
                i--;
                fir++;
            }
        }
        return ans;
    }
};