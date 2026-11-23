class Solution {
public:
    int minRange(int a, int b, int c) {
        int x=(a+b);
        int y=(b+c);
        int z=(c+a);
        int p=max({x,a,b})-min({x,a,b});
        int q=max({y,b,c})-min({y,b,c});
        int r=max({z,c,a})-min({z,c,a});
        int s=max({a,b,c})-min({a,b,c});
        return min({p,q,r,s});
    }
};