class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            count += map[nums[i]];
            map[nums[i]] += 1;
        }
        return count;
    }
};