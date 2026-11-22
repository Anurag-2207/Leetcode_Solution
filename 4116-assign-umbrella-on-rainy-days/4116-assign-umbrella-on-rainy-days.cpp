class Solution {
public:
    vector<string> assignUmbrella(vector<int>& r) {
        int ali=0;
        int bob=0;
        int n=r.size();
        vector<string>ans;
        for(int i=0;i<r.size()-1;i++){
            if(r[i]==0){
                ans.push_back("None");
            }
            else if(r[i]==r[i+1]){
                if(ali<=bob){
                    ans.push_back("Alice");
                    ali++;
                }
                else{
                    ans.push_back("Bob");
                    bob++;
                }
            }
            else{
                ans.push_back("Bob");
                bob++;
            }


        }
        if(r[n-1]==1) ans.push_back("Bob");
        else ans.push_back("None");

        return ans;
    }
};