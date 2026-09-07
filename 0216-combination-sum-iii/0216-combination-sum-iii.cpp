class Solution {
public:
    void solve( int i, int n , int k , vector<vector<int>>& ans, vector<int>&ds ){
        if(n==0 && k==0){
            ans.push_back(ds);
            return;
        }
        if(i==10 || k==0 || i>n) return;
        //pick 'i'
        ds.push_back(i);
        solve(i+1, n-i , k-1, ans, ds);
        ds.pop_back();
        //don't pick 'i'
        solve(i+1,n,k,ans,ds);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int i = 1;
        vector<vector<int>> ans;
        vector<int> ds;
        solve(1,n,k,ans,ds);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna