class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n=arr.size();
        int maxi=n;
        sort(arr.begin(),arr.end());
        arr[0]=1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]) continue;
            else arr[i]=arr[i-1]+1;
        }
        maxi=min(maxi,arr[n-1]);
        return maxi;
    }
};