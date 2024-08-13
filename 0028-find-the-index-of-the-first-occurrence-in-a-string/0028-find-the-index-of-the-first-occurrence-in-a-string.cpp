class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        if (m < n) {
            return -1;
        }
        int i = 0;
        int j = 0;
        int result = 0;
        while (i < m && j < n) {
            if (haystack[i] == needle[j]) {
                if (i - result + 1 == n) {
                    return result;
                }
                j++;
                i++;
            } else {
                j = 0;
                result++;
                i = result;
            }
        }
        return -1;
    }
};