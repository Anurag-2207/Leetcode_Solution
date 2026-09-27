class Solution {
public:
    bool canTransform(vector<int>& s, vector<int>& t) {
        if(s==t) return true;
        long long s1=0;
        for(int i=0;i<s.size();i++) s1+=s[i];
        long long s2=0;
        for(int i=0;i<t.size();i++) s2+=t[i];
        if(s1==s2) return true;
        return false;
    }
};