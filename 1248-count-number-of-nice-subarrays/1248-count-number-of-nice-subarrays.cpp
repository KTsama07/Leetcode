class Solution {
public:
    int function(vector<int>& nums, int k) {
        // if(k==0) return 
        int n = nums.size();
        int l = 0 ;int r = 0; int odds =0 ;int cnt=0;
        while(r<n){
            if(nums[r]%2 != 0) odds++;
            while(odds > k){
                if(nums[l]%2 != 0) odds--;
                l++;
            }
            cnt += r-l+1;
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k){
            return function(nums, k) - function(nums , k-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna