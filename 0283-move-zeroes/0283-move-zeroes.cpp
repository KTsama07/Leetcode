class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        // optimal
        int j;
        for(j = 0 ; j<n ; j++){
            if( nums[j] == 0 ) break;
        }
        int i = j+1;
        for(i; i<n; i++){
            if(nums[i] != 0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j]= temp;
                j++;
            }

        }
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna