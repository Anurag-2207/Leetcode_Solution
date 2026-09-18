class Solution {
public:
    void generate(int n, string s, vector<string> &res){
        if(s.length()==n){
            res.push_back(s);
            return;
        }

        generate(n,s+'1',res);

        if(s.empty() || s.back()!='0'){
            generate(n,s+'0',res);
        }
    }
    vector<string> validStrings(int n) {
        vector<string>res;
        generate(n,"",res);
        return res;
    }
};