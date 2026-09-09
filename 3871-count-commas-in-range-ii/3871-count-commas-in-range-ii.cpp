class Solution {
public:
    long long countCommas(long long n) {
        long long commas = 0 ;
        long long th = 1000;
        while(n>=th){
            commas += n-th+1;
            th *= 1000;
        }
        
        return commas;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna