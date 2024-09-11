class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        int diffbit = start ^ goal;
        while (diffbit) {
            if (diffbit & 1) {
                count++;
            }
            diffbit = diffbit >> 1;
        }
        return count;
    }
};