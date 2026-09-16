class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        ranges::sort(intervals, {}, [](auto& x) {
            return pair{x[0], -x[1]};
        });
        int ans=0;
        int maxi=0;
        for(int i=0;i<intervals.size();i++){
            ans+=(intervals[i][1]>maxi);
            maxi=max(maxi,intervals[i][1]);
        }
        return ans;
    }
};