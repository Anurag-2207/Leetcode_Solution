class Solution {
public:
    // long long LCS(string x,string y,long long n,long long m,vector<vector<long long>> &dp){
    //     if(n==0 || m==0) return 0;
    //     if(dp[n][m]!=-1){
    //         return dp[n][m];
    //     }
    //     if(x[n-1]==y[m-1]){
    //         return dp[n][m]=1+LCS(x,y,n-1,m-1,dp);
    //     }
        
    //         return dp[n][m]= max(LCS(x,y,n-1,m,dp),LCS(x,y,n,m-1,dp));
        
    // }
    int longestCommonSubsequence(string x, string y) {
        long long n=x.size();
        long long m=y.size();
        vector<vector<long long>>dp(n+1,vector<long long>(m+1,-1));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                    continue;
                }
                if(x[i-1]==y[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};