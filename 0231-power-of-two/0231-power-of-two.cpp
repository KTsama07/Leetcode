class Solution {
public:
    bool isPowerOfTwo(double n) {
        if (n==1 || n==2) return true;
        double k = (double)n/2;
        if (k==2) return true;
        else if(k<2) return false;
        return isPowerOfTwo(k);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna