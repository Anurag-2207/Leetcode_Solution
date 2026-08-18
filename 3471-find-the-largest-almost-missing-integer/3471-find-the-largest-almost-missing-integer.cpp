class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        int str=nums[0];
        int end=nums[n-1];
        int cntstr=0;
        int cntend=0;
        sort(nums.begin(),nums.end());
        if(n==k){
            return nums[n-1];
        }
        if(k==1){
            map<int,int>mp;
            for(int i=0;i<n;i++){
                mp[nums[i]]++;
            }
            int ans=-1;
            for(auto it:mp){
                if(it.second==1){
                    ans=it.first;
                }
            }
            return ans;
        }
        for(int i=0;i<n;i++){
            if(nums[i]==str){
                cntstr++;
            }
            else if(nums[i]==end){
                cntend++;
            }
        }
        if(cntstr==1 && cntend==1){
            return max(str,end);
        }
        else if(cntstr==1){
            return str;
        }
        else if(cntend==1){
            return end;
        }
       return -1;
    }
};