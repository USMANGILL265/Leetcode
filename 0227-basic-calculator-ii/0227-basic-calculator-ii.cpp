class Solution {
public:
    int calculate(string s) {
        int curr = 0;
        int ans = 0;
        char op = '+';
        s += '+';
        stack<int> stk;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                curr = curr * 10 + (s[i] - '0');
            } else if (s[i] == ' ') {
                continue;
            } else {
                if (op == '+') {
                    stk.push(curr);
                } else if (op == '-') {
                    stk.push(-curr);
                } else if (op == '*') {
                    int num = stk.top();
                    stk.pop();
                    stk.push(num * curr);
                } else {
                    int num = stk.top();
                    stk.pop();
                    stk.push(num / curr);
                }
                curr = 0;
                op = s[i];
            }
        }
        while (!stk.empty()) {
            ans += stk.top();
            stk.pop();
        }
        return ans;
    }
};