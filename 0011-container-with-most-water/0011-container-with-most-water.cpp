class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int curr = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right) {
        curr = min(height[left], height[right]) * (right - left);
        maxarea = max(maxarea, curr);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxarea;
    }
};