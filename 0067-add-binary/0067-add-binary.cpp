class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.size();
        int n = b.size();
        string s;
        if (m > n) {
            b = s.append(m - n, '0') + b;
        } else if (n > m) {
            a = s.append(n - m, '0') + a;
        }
        int car = 0;
        string ans;
        for (int i = b.size() - 1; i >= 0; i--) {
            int sum = (a[i] - '0') + (b[i] - '0') + car;
            ans = to_string(sum % 2) + ans;
            car = sum / 2;
        }
        if (car != 0)
            ans = '1' + ans;
        return ans;
    }
};