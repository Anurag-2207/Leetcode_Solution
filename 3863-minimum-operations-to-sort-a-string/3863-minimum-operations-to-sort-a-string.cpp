class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        string t = s;
        sort(t.begin() ,t.end());
        if(t == s) return 0;
        if(t.size() == 2) return -1;
        if(t[0] == s[0] || t.back() == s.back()) return 1;
        string temp = s;
        for(int i =0;i<n-1;i++){
            if(s[i] == t[0]) return 2;
        }
        for(int i =1;i<n;i++){
            if(s[i] == t.back()) return 2;
        }
        return 3;
    }
};