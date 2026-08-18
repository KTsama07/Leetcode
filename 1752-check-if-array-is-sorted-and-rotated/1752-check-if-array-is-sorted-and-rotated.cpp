class Solution {
public:
    bool check(vector<int>& nums) {
        int drops =0;
        int n = nums.size();
        for(int i=0; i< n; i++){
            if(nums[i]> nums[(i+1)%n]) drops++;
        }
        return (drops > 1) ? false : true ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna