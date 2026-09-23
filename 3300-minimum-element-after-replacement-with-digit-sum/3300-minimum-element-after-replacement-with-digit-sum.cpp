class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int sum=INT_MAX;
        for(int i=0;i<n;i++){
            int k=nums[i];
            int sum1=0;
            while(k>0){
                int mod=k%10;
                sum1+=(mod);
                k/=10;
            }
            sum=min(sum,sum1);
        }
        return sum;
    }
};