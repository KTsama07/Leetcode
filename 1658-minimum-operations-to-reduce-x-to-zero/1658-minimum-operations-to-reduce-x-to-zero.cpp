class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int l = 0 ; int r = n-1;
        long long total = 0;
        for(auto num: nums){
            total+=num;
        }
        long long target = total - x;
        int sum = 0;
        int maxLen = -1;
        for(int r= 0 ; r<n;r++){
            sum+=nums[r];
            while(l<=r&&sum>target){
                sum-=nums[l]; // sum -= nums[l++]
                l++; 
            }
            if(sum==target) maxLen = max(maxLen,r-l+1);
        }
        return (maxLen==-1) ? -1 : n-maxLen;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna