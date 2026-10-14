class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s="";
        if(sum>9*num) return s;
        if(num==1 && sum>9) return s;
        if(num==1 && sum<=9){
            s+=to_string(sum);
            return s;
        }
        while(sum>=9){
            s+='9';
            sum-=9;
            num--;
        }
        if(sum==0 && num==0) return s;
        s+=to_string(sum);
        num--;
        while(num>0){
            s+='0';
            num--;
        }
        return s;
    }
};