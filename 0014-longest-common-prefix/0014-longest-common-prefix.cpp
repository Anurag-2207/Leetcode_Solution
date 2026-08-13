class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1){
            return strs[0];
        }
        sort(strs.begin(),strs.end());
        string str1=strs[0];
        string str2=strs[n-1];
        int nf=str1.size();
        string ans="";
        for(int i=0;i<nf;i++){
            if(str1[i]==str2[i]){
                ans+=str1[i];
            }
            else{
                break;
            }
        }
        return ans;

    }
};