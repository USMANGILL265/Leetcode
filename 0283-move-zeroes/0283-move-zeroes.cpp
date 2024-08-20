class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insert = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[insert] = nums[i];
                insert++;
            }
        }
        while (insert < nums.size()) {
            nums[insert++] = 0;
        }
    }
};