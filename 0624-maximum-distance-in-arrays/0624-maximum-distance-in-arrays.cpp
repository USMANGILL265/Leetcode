class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int Val1 = arrays[0][0];
        int Val2= arrays[0].back();
        int maxDistance = 0;

        for (int i = 1; i < arrays.size(); i++) {
            int currentMin = arrays[i][0];
            int currentMax = arrays[i].back();

            maxDistance = max(maxDistance, abs(currentMax - Val1));
            maxDistance = max(maxDistance, abs(Val2 - currentMin));

            Val1 = min(Val1, currentMin);
            Val2 = max(Val2, currentMax);
        }

        return maxDistance;
    }
};