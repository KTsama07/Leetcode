class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> seen;
        for(int i = 0; i < nums.size(); i++){
            int compliment = target - nums[i];
            if(seen.find(compliment) != seen.end()){
              return {seen[compliment] , i};
            }
            seen[nums[i]] = i;
       }
       return {-1,-1};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna