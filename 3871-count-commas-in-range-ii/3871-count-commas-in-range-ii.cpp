class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        if(n<pow(10,6)){
            return n-999;
        }
        if(n<pow(10,9)){
            long long x=999000;
            return (x+((n-999999)*2));
        }
        if(n<pow(10,12)){
            long long x=999000+(999000000*2);
            return (x+((n-999999999)*3));
        }
        if(n==pow(10,15)) return 3998998998999005;
        long long x=999000+(999000000*2)+(999000000000*3);
        return (x+((n-999999999999)*4));
    }
};