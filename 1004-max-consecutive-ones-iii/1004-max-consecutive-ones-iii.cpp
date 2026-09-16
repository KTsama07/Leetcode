class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int max_len = 0;
        int l = 0;
        int zeros = 0;
        for(int r = 0 ; r < n ; r++){
            if(nums[r]==0) zeros++;
            if(zeros <= k){
                max_len = max(max_len , r-l+1);
            }
            else {
                while(nums[l]!=0) l++;
                zeros--;
                l++;
            }
        }
        return max_len;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna