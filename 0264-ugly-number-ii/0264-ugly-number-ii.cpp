class Solution {
public:
    int nthUglyNumber(int n) {
        set<int64_t> ugly = {1, 2, 3, 4, 5, 6};
        int64_t ans = 1;
        while (n--) {
            ans = *begin(ugly);
            ugly.erase(begin(ugly));
            for (int i = 2; i <= 6; i++) {
                ugly.insert(i * ans);
            }
        }
        return ans;
    }
};