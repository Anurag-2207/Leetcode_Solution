class Solution {
public:
    const long long MOD = 1e9 + 7;
    long long power(long long x, long long y) {
    long long result = 1;

    while (y > 0) {
        if (y & 1)
            result = (result * x) % MOD;

        x = (x * x) % MOD;
        y /= 2;
    }

    return result;
}
    int sumDecoded(vector<long long>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int w=nums[i]%10;
            long long d=floor(nums[i]/10);
            string s=to_string(d);
            string xs="";
            string ys="";
            for(int i=0;i<w;i++){
                xs+=s[i];
            }
            for(int i=w;i<s.size();i++){
                ys+=s[i];
            }
            int x=stoi(xs);
            int y=stoi(ys);
            sum = (sum + power(x, y)) % MOD;        }
        return sum;
    }
};