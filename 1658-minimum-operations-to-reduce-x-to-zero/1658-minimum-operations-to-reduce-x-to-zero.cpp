class Solution {
public:
    int minOperations(vector<int>& a, int x) {
        int n=a.size();
        int total=reduce(a.begin(),a.end());
        int k=total-x;
        if(k<0) return -1;
        if(k==0) return n;
        int best=-1;
        int i=0;
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=a[j];
            while(sum>k){
                sum-=a[i];
                i++;
            }
            if(sum==k){
                best=max(best,j-i+1);
            }
        }
            if(best==-1) return -1;
            return n-best;
    }
};