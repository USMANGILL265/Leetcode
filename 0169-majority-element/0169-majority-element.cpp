class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
    unordered_map<int, int> hash;
        int t = 0;
        int m = 0;
        for (int n : nums) {
            hash[n] = 1 + hash[n];
            if (hash[n] > m) {
                t = n;
                m = hash[n];
            }
        }

        return t;        
    }
};