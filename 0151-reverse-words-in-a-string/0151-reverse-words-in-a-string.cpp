class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ns="";
        int i=0;
        while(i<n && s[i]==' ') i++;
        while(i<n){
            string add="";
            bool is=false;
            while(i<n && s[i]!=' '){
                add+=s[i];
                i++;
                is=true;
            }
            if(is){
            reverse(add.begin(),add.end());
            ns+=add;
            ns+=' ';
            }
            i++;
        }
        reverse(ns.begin(),ns.end());
        ns.erase(ns.begin());
        return ns;
    }
};