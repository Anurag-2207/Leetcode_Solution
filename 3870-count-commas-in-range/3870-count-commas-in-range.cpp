class Solution {
public:
    int countCommas(int n) {
        if(n<1000) return 0;
        else if(n<10000){
            return n-999;
        }
        else if(n<100000){
            return 9000+((n-9999));
        }
        return 99001;
    }
};