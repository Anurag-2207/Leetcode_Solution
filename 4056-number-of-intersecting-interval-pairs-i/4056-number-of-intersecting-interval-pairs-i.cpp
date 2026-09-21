class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        int n=a.size();
        long long cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n-1;j++){
                if(a[i][1]>=a[j+1][0]) cnt++;
            }
        }
        return cnt;
    }
};