class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        sort(lights.begin(),lights.end());
        int maxi=lights[lights.size()-1];
        int n=arrivalTime.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            int x=arrivalTime[i]%period;
            if(x>=maxi){
                int y=period-x;
                ans=max(ans,y);
            }
            else{
                ans=max(ans,0);
            }
        }
        return ans;
    }
};