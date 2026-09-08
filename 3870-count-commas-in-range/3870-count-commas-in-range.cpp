class Solution {
public:
    int countCommas(int n) {
        if(n<1000) return 0;
        if(n>=1000){
            return (n-999);
        }
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna