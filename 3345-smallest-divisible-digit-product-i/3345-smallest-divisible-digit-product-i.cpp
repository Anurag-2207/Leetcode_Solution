class Solution {
public:
    int smallestNumber(int n, int t) {
        if(n%10==0){
            return n;
        }
        for(int i=n;i<=n+9;i++){
            int x=i;
            int sum=1;
            while(x>0){
                sum*=(x%10);
                x/=10;
            }
            if(sum%t==0){
                return i;
            }
        }
        return n;
    }
};