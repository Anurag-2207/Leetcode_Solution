class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        int n=a.size();
        long long cnt=0;
        for(int i=0;i<n;i++){
            int x=a[i][1];
            int low=i+1;
            int high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(a[mid][0]<=x) low=mid+1;
                else high=mid-1;
            }
            cnt+=(high-i);
        }
        return cnt;
    }
};