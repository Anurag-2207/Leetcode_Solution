class Solution {
public:
    string resultingString(string s) {
        for(int i=1;i<s.size();i++){
            if(abs(s[i]-s[i-1])==1){
                s.erase(s.begin()+i-1,s.begin()+i+1);
                if(i==1){
                    i--;
                }
                else{
                    i-=2;
                }
            }
            else if((s[i]=='a' && s[i-1]=='z') || (s[i]=='z' && s[i-1]=='a')){
                s.erase(s.begin()+i-1,s.begin()+i+1);
                if(i==1){
                    i--;
                }
                else{
                    i-=2;
                }
            }
        }
        return s;
    }
};