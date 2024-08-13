class Solution {
public:
    int compareVersion(string version1, string version2) {
        int ptr1 = 0;
        int ptr2 = 0;
        int size1 = version1.size();
        int size2 = version2.size();
        while (ptr1 < size1 || ptr2 < size2) {
            int rev1 = 0, rev2 = 0;
            while (ptr1 < size1 && version1[ptr1] != '.') {
                rev1 = rev1 * 10 + (version1[ptr1] - '0');
                ptr1++;
            }
            while (ptr2 < size2 && version2[ptr2] != '.') {
                rev2 = rev2 * 10 + (version2[ptr2] - '0');
                ptr2++;
            }
            if (rev1 < rev2) {
                return -1;
            }
            if (rev2 < rev1) {
                return 1;
            }
            ptr1++;
            ptr2++;
        }
        return 0;
    }
};