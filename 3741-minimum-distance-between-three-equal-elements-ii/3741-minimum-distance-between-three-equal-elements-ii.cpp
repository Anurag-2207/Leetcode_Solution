class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return -1;
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int mini=INT_MAX;
        for(auto it:mp){
            if(it.second.size()>=3){
                int x=it.second.size();
                for(int i=0;i<x-2;i++){
                int t=(it.second[i+2]-it.second[i])*2;
                mini=min(mini,t);
                }
            }
        }
        if(mini==INT_MAX) return -1;
        return mini;
    }
};