class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0;
        int n = nums.size();
        // for(int i = 1 ; i <= n ; i++){
        //     xor1 ^= i;
        // }
        for(int i = 0 ; i < n ; i++){
            xor1 ^= nums[i];
            xor1 ^= (i+1);
        }
        return xor1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna