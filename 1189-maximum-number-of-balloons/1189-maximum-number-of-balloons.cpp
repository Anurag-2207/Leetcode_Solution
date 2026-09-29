class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mp;
        for(int i=0;i<text.size();i++){
            mp[text[i]]++;
        }
        int mini=INT_MAX;
        int cnt=0;
        for(auto it:mp){
             if(it.first=='b' || it.first=='a' || it.first=='l' || it.first=='o' || it.first=='n'){
                cnt++;
             }
        }
        if(cnt!=5) return 0;
        for(auto it:mp){
            if(it.first=='b' || it.first=='a' || it.first=='l' || it.first=='o' || it.first=='n'){
                if(it.first=='l' || it.first=='o'){
                    mini=min(mini,it.second/2);
                }
                else{
                    mini=min(mini,it.second);
                }
            }
        }
         return mini;
    }
};