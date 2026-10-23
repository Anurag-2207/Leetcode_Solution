class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        if(is_sorted(nums.begin(),nums.end())) return 0;
        vector<int>n;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            if(x==i) continue;
           n.push_back(nums[i]);
        }
        int maxi=n[0];
        for(int i=1;i<n.size();i++){
            maxi=maxi&n[i];
        }
        return maxi;
    }
};