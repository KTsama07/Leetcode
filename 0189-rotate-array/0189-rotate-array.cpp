class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if( k > nums.size()){
            k = k%n;
        }
        k = n - k;
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k , nums.end());
        reverse(nums.begin(), nums.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna