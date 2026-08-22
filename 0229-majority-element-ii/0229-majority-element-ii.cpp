class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector<int> res;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(auto it: mpp){
            if(it.second > (n/3)) res.push_back(it.first);
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna