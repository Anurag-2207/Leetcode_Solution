class Solution {
public:
    int distinctSubseqII(string s) {
        const long long MOD = 1e9 + 7;

        vector<long long> last(26, 0);

        long long dp = 1;   // empty subsequence

        for(char c : s) {
            long long newDp = (2 * dp) % MOD;

            newDp = (newDp - last[c - 'a'] + MOD) % MOD;

            last[c - 'a'] = dp;
            dp = newDp;
        }

        // remove empty subsequence
        return (dp - 1 + MOD) % MOD;
    }
};