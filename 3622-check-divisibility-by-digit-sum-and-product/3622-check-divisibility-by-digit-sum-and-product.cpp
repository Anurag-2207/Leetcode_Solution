class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum=0;
        long long pro=1;
        int x=n;
        while(n>0){
            sum+=(n%10);
            pro*=(n%10);
            n/=10;
        }
        if(x%(sum+pro)==0) return true;
        return false;
    }
};