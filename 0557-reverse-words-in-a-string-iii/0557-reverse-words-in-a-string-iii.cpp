class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = 0;
        int n = s.length(); 

        while (left < n) {
            
            while (right < n && s[right] != ' ') {
                right++;
            }
           
            std::reverse(s.begin() + left, s.begin() + right);
            left = right + 1;
            right++;
        }
       
        return s;
    }
};