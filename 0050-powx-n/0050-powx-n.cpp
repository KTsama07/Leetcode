class Solution {
public:
    double myPow(double x, int n) {
        long long pow = n;
        if (pow < 0) {
            x = 1 / x;
            pow = -pow;
        }
        double res = 1;
        while (pow > 0) {
            if (pow & 1) {
                res *= x;
            }
            x *= x;
            pow >>= 1;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna