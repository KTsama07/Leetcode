class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long amax = LLONG_MIN;
        int n = nums.size();
        long long sum = 0;
        for( int i = 0 ; i < n ; i++){
            sum += nums[i];
            amax = max(sum,amax);
            if(sum < 0) sum = 0;
        }
        return amax;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna