class Solution {
public:
    int strangePrinter(string s) {
        int n = s.size();
        if (n == 0)
            return 0;

        vector<vector<int>> dp(n, vector<int>(n, 0));
        
        for (int len = 1; len <= n; ++len) {
            for (int i = 0; i <= n - len; ++i) {
                int j = i + len - 1;
                dp[i][j] = len;
                for (int k = i + 1; k <= j; ++k) {
                    int turns = dp[i][k - 1] + dp[k][j];
                    if (s[k - 1] == s[j]) {
                        turns--;
                    }
                    dp[i][j] = min(dp[i][j], turns);
                }
            }
        }

        return dp[0][n - 1];
    }
};