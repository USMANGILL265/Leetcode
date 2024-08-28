class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> map;
        int j = 0;
        int maxlen = 0;
        for (int i = 0; i < fruits.size(); i++) {
            map[fruits[i]]++;
            if (map.size() <= 2) {
                maxlen = max(maxlen, i - j + 1);
            } else {

                map[fruits[j]]--;
                if (map[fruits[j]] == 0) {
                    map.erase(fruits[j]);
                }
                j++;
            }
        }
        return maxlen;
    }
};