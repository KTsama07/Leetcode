class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long ans =0 ;
        for(int i = 0 ; i < n ; i++){
            int max_t = nums[i];
            int min_t = nums[i];
            for(int j = i+1; j<n ; j++){
                max_t = max(max_t,nums[j]);
                min_t = min(min_t,nums[j]);
                ans += max_t-min_t;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna