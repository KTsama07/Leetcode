class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        vector<int> result ;
        int n = nums.size() ;
        for(int i = 0 ; i < n; i++ ){
            int a = nums[i];
            int rem = target - a;
            if(mp.find(rem) != mp.end()){
                result.push_back(mp[rem]);
                result.push_back(i);
            } else {
                mp[a]= i;
            }
        }
        return result;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna