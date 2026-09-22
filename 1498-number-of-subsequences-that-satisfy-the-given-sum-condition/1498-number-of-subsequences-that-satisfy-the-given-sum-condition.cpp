class Solution {
public:
    long long mod=1000000007;
    long long power(long long a,long long b){
        long long ans=1;
        while(b>0){
        if(b%2==1)
            ans=(ans*a)%mod;
        a=(a*a)%mod;
        b/=2;
        
        }
        return ans;
    }
    int numSubseq(vector<int>& nums, int target) {
        int n=nums.size();
        long long ans=0;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=n-1;
        while(i<=j){
            if(nums[i]+nums[j]<=target){
                ans=(ans+power(2,j-i))%mod;
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};