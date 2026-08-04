class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int x=nums[0];
        int i=0;
        while(x<nums[nums.size()-1]){
            if(x==nums[i]){
                x++;
                i++;
            }
            else{
                ans.push_back(x);
                x++;
            }
        }
        return ans;
    }
};