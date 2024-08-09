class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference,
                            int valueDifference) {

        for (int left = 0; left < nums.size(); left++) {
            for (int right = left; right < nums.size(); right++) {
                if (abs(left - right) >= indexDifference &&
                    abs(nums[left] - nums[right]) >= valueDifference) {
                    return {left, right};
                }
            }
        }
        return {-1, -1};
    }
};