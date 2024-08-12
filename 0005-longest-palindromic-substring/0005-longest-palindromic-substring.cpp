class Solution {
public:
    string longestPalindrome(string s) {
        int u = s.length();
        int st = 0;
        int  ml = 1;
        bool dp[u][u];
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < u; i++)
            dp[i][i] = 1;
        for (int i = 0; i < u - 1; i++) {
            if (s[i] == s[i + 1]) {
                dp[i][i + 1] = 1;
                st = i;
                ml = 2;
            }
        }
        for (int k = 3; k <= u; k++) {
            for (int i = 0; i + k - 1 < u; i++) {
                if (s[i] == s[i + k - 1] && dp[i + 1][i + k - 2]) {
                    dp[i][i + k - 1] = 1;
                    st = i;
                    ml = k;
                }
            }
        }
        return s.substr(st, ml);
    }
};