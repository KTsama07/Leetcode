class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cout0=0, cout1=0, cout2=0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0) cout0++;
            if(nums[i] == 1) cout1++;
            if(nums[i] == 2) cout2++;
        }
        for(int i = 0 ; i < n ; i++){
            if(i < cout0) nums[i] = 0;
            if(i>=cout0 && i< (cout0+cout1)) nums[i]=1;
            if( i >=(cout0+cout1) && i < (cout0+cout1+cout2)){ 
                nums[i] = 2;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna