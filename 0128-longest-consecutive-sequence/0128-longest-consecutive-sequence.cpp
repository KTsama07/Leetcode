class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = 1;
        int curr = 1;
        for(int i = 1 ;i < n; i++){
            if(nums[i] == nums[i-1]+1){
                curr++;
            } else if(nums[i]==nums[i-1]) continue;
            else curr = 1;
            ans = max(ans, curr);
        }
       
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna