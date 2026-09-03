class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        sort(nums1.begin(),nums1.end());
        int x=nums1[0]%2;
        if(x==0){
            for(int i=0;i<n;i++){
                if(nums1[i]%2!=0) return false;
            }
        }
        return true;
    }
};