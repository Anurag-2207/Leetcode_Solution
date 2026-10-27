class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>ans;
        for(int i=0;i<m;i++){
            string x="";
            for(int j=0;j<n;j++){
                
                if(i==0){
                    x+=".";
                }
                else if(j==n-1){
                    x+=".";
                }
                else{
                    x+="#";
                }
            }
            ans.push_back(x);
        }
        return ans;
    }
};