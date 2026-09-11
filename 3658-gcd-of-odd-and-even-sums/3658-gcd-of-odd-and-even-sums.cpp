class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd=((1+((2*n)-1))*n)/2;
        int even=((2+(2*n))*n)/2;
        return __gcd(odd,even);
    }
};