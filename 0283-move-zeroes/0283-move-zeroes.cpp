class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        // brute force TC:O(2N); SC: O(x);
        vector<int> temp;
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
            }
        }
        int nz = temp.size();
        for(int i = 0 ; i<nz;i++){
            nums[i] = temp[i];
        }
        for(int i = nz ; i<n;i++){
            nums[i] = 0;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna