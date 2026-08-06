class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mid=n/2;
        if(n%2!=0){
            int x=nums[mid];
            int ans=0;
            for(int i=0;i<n;i++){
                ans+=abs(nums[i]-x);
            }
            return ans;
        }
        else{
            int x=nums[mid];
            int y=nums[mid-1];
            int ans1=0;
            int ans=0;
            for(int i=0;i<n;i++){
                ans1+=abs(nums[i]-x);
            }
            int ans2=0;
            for(int i=0;i<n;i++){
                ans2+=abs(nums[i]-x);
            }
            ans=min(ans1,ans2);
            return ans;
        }
    }
};