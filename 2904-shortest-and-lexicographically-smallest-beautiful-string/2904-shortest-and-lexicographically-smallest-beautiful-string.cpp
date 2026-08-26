class Solution {
public:
    bool isstring(string s,int k){
            int x=s.size();
            int cnt=0;
            for(int i=0;i<x;i++){
                if(s[i]=='1') cnt++;
            }
            if(cnt==k) return true;
            return false;
    }
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int i=0;
        int j=i;
        string mini="";
        int minisize=INT_MAX;
        while(i<n){
            string ss=s.substr(i,j-i+1);
            if(isstring(ss,k)){
                if(ss.size()<minisize){
                    minisize=ss.size();
                    mini=ss;
                }
                else if(ss.size()==minisize){
                    mini=min(mini,ss);
                }
            }
            j++;
            if(j==n){
                i++;
                j=i;
            }
        }
        return mini;
    }
};