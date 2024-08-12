class Solution {
public:
    bool isHappy(int n) {
        std::set<int> usedIntegers;
        while (true) {
            int sum = 0;
            while (n != 0) {
                sum += std::pow(n % 10, 2.0);
                n = n / 10;
            }
            if (sum == 1) {
                return true;
            } else {
                n = sum;
            }

            if (usedIntegers.contains(n))
                return false;
            usedIntegers.insert(n);
        }
    }
};