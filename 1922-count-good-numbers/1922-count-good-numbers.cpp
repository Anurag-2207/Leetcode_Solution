class Solution {
public:
    static const long long MOD = 1000000007;
    long long power(long long base,long long expo){
        long long result=1;
        base%=MOD;
        while(expo>0){
            if(expo & 1){
                result=(result*base)%MOD;
            }
            base=(base*base)%MOD;
            expo>>=1;
        }
        return result;
    }
    int countGoodNumbers(long long n) {
        long long evenpoe=(n+1)/2;
        long long oddpow=n/2;
        long long evenw=power(5,evenpoe);
        long long oddw=power(4,oddpow);

        return (evenw*oddw)%MOD;
    }
};