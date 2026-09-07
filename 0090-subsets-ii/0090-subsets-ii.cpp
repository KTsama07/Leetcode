class Solution {
public:
    void solve(int ind , set<vector<int>>& s, vector<int>& nums,vector<int>&ds){
        if(ind== nums.size()){
            s.insert(ds);
            return;
        }
        ds.push_back(nums[ind]);
        solve(ind+1,s,nums,ds);
        ds.pop_back();
        solve(ind+1,s,nums,ds);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> s;
        vector<int>ds;
        sort(nums.begin(), nums.end());
        solve(0,s,nums,ds);
        vector<vector<int>> ans;
        for(auto x: s){
            ans.push_back(x);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna