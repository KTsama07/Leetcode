class Solution {
public:
    void solve(int ind , vector<vector<int>>& ans, vector<int>& nums,vector<int>&ds){
        if(ind == nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        solve(ind+1,ans,nums,ds);
        ds.pop_back();
        int nextind = ind + 1;
        while(nextind<nums.size() && nums[ind]==nums[nextind]) nextind++;
        solve(nextind,ans,nums,ds);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>ds;
        sort(nums.begin(), nums.end());
        solve(0,ans,nums,ds);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna