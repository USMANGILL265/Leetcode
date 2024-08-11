class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int j = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            j = j ^ nums[i];
        }
        return j;
    }
};