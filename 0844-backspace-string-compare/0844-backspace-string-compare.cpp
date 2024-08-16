class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string first = "";
        int count = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '#') {
                count++;
                continue;
            }
            if (count > 0) {
                count--;
            } else {
                first += s[i];
            }
        }
        count = 0;
        string sec = "";
        for (int i = t.size() - 1; i >= 0; i--) {
            if (t[i] == '#') {
                count++;
                continue;
            }
            if (count > 0) {
                count--;
            } else {
                sec += t[i];
            }
        }

        return first == sec;
    }
};
