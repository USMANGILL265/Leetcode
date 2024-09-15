class Solution {
public:
    int findTheLongestSubstring(string s) {
        vector<int> mapy(32, -2);
        mapy[0] = -1;

        int maxLen = 0;
        int mas = 0;

        for (int i = 0; i < s.size(); ++i) {
            char ch = s[i];

            switch (ch) {
                case 'a':
                    mas ^= 1;
                    break;
                case 'e':
                    mas ^= 2;
                    break;
                case 'i':
                    mas ^= 4;
                    break;
                case 'o':
                    mas ^= 8;
                    break;
                case 'u':
                    mas ^= 16;
                    break;
            }

            int prev = mapy[mas];
            if (prev == -2) {
                mapy[mas] = i;
            } else {
                maxLen = max(maxLen, i - prev);
            }
        }

        return maxLen;
    }
};