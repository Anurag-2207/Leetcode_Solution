class Solution {
public:
    bool sumGame(string s) {
        int leftsum=0;
        int rightsum=0;
        int q=0;
        int n=s.size();
        for(int i=0;i<n/2;i++){
            if(s[i]!='?') leftsum+=(s[i]-'0');
            else q++;
        }
        for(int i=n/2;i<n;i++){
            if(s[i]!='?') rightsum+=(s[i]-'0');
            else q--;
        }
        int diff=rightsum-leftsum;

        if (q % 2 != 0)
            return true;
        return diff-(q/2)*9 != 0;
         
    }
};