class Solution {
    int logest(string s,int left,int right){
        while(left>=0 && right<=s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
public:
    string longestPalindrome(string s) {
        int start=0;
        int end=0;
        for(int i=0;i<s.size()-1;i++){
            int len1=logest(s,i,i);
            int len2=logest(s,i,i+1);
            int len=max(len1,len2);
            if(len>end-start){
                start=i-(len-1)/2;
                end=i+len/2;
            }
        }
        return s.substr(start,end-start+1);
    }
};