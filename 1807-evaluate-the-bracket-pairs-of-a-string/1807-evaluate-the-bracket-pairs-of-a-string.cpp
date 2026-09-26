class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n=s.size();
        int i=0;
        string ans="";
        map<string,string>mp;
        for(int i=0;i<knowledge.size();i++){
                    mp[knowledge[i][0]]=knowledge[i][1];
                }
        while(i<n){
            if(s[i]=='('){
                i++;
                string ns="";
                while(s[i]!=')'){
                    ns+=s[i];
                    i++;
                }
                if(mp[ns]!=""){
                ans+=mp[ns];
                }else{
                    ans+='?';
                }
                i++;
            }
            else{
                ans+=s[i];
                i++;
            }
        }
        return ans;
    }
};