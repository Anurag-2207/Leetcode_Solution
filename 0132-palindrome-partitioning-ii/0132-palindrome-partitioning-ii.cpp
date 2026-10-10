
class Solution {
public:
    vector<vector<long long>> dp;
    vector<vector<bool>> pal;

    long long solve(string &s, int i, int j) {
        if (i >= j || pal[i][j]) return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        long long mn = INT_MAX;

        for (int k = i; k < j; k++) {
            if (pal[i][k]) {
                long long temp = 1 + solve(s, k + 1, j);
                mn = min(mn, temp);
            }
        }

        return dp[i][j] = mn;
    }

    long long minCut(string s) {
        int n = s.size();

        dp.assign(n, vector<long long>(n, -1));
        pal.assign(n, vector<bool>(n, false));

        // Precompute palindrome substrings
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i; j < n; j++) {
                if (s[i] == s[j] &&
                    (j - i <= 2 || pal[i + 1][j - 1])) {
                    pal[i][j] = true;
                }
            }
        }

        return solve(s, 0, n - 1);
    }
};
