class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
        int n=nums.size();
       int cnt=0;
       for(int i=0;i<n;i++){
        int x=find(nums.begin(),nums.end(),i+1)-nums.begin();
        for(int j=x;j>i;j--){
            if(locked[j]){
                k--;
                cnt++;
                locked[j]=0;
            }
            if(locked[j-1]){
                k--;
                cnt++;
                locked[j-1]=0;
            }
            cnt++;
            swap(nums[j],nums[j-1]);
        }
       }
        if(k<0) return -1; 
        return cnt;
    }
};