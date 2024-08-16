class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int count = -1;
        for (int i = 0; i < n; i++) {
            if (word[i] == ch) {
                count = i;
                break;
            }
        }
        if (count == -1) {
            return word;
        }
        for (int i = 0; i <= count / 2; i++) {
            char c = word[i];
            word[i] = word[count - i]; 
            word[count - i] = c;
        }
        return word;
    }
};
