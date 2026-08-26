class Solution {
public:
    bool checkStrings(string s1, string s2) {
        string s1e="";
        string s2e="";
        string s1o="";
        string s2o="";
        int n=s1.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                s1e+=s1[i];
                s2e+=s2[i];
            }
            else{
                s1o+=s1[i];
                s2o+=s2[i];
            }
        }
        sort(s1e.begin(),s1e.end());
        sort(s1o.begin(),s1o.end());
        sort(s2e.begin(),s2e.end());
        sort(s2o.begin(),s2o.end());
        if(s1e==s2e && s1o==s2o) return true;
        return false;
    }
};