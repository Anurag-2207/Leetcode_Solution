class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1==s2) return true;
        string s3=s2;
        swap(s3[0],s3[2]);
        if(s1==s3) return true;
        string s4=s2;
        swap(s4[1],s4[3]);
        if(s1==s4) return true;
        swap(s2[0],s2[2]);
        swap(s2[1],s2[3]);
        if(s1==s2) return true;
        return false;
    }
};