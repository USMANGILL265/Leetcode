class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero = 0;
        int l = 0;
        int r = 0;
        int length = 0;
        int maxlen = 0;

        while (r < nums.size()) {
            if (nums[r] == 0) {
                zero++;
            }
            if (zero > k) {
                while (nums[l] != 0 && l < nums.size()) {
                    l++;
                }
                l++;
                zero--;
            } else {
                length = r - l + 1;
            }
            maxlen = max(maxlen, length);
            r++;
        }
        return maxlen;
    }
};