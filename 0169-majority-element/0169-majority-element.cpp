class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int element = nums[0];
        int count  = 0;
        for(int i =0; i<n; i++){
            if(count==0) element = nums[i];
            if(nums[i] != element) count--;
            else count++;
        }
        int tar=0;
        for(int i = 0 ; i<n; i++){
            if(nums[i] == element) tar++;
        }
        if(tar>n/2) return element;
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna