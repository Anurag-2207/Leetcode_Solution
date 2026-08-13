class Solution {
public:
    string largestOddNumber(string num) {
        int idx=num.size();
        for(int i=num.size();i>=0;i--){
            if((num[i]-'0')%2!=0){
                idx=i;
                break;
            }
        }
        if(idx==num.size()) return "";
        num.erase(num.begin()+(idx+1),num.end());
        return num;
        
    }
};