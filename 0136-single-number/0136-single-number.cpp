class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mpp;
        for(int i : nums){
            mpp[i]++;
        }
        for(auto it : mpp){
            if(it.second == 1)
                return it.first;
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna