class Solution {
public:
     void findcombinations(int indx , int target , vector<int>&ds ,vector<int>& candidates,vector<vector<int>>&ans){
            if(indx == candidates.size()){
                if(target == 0){
                    ans.push_back(ds);
                }
                return;
            }
            //pick cand[indx]
            if(candidates[indx] <= target){
                ds.push_back(candidates[indx]);
                findcombinations(indx,target-candidates[indx],ds,candidates,ans);
                ds.pop_back();
            }
            //don't pick cand[indx]
            findcombinations(indx+1,target,ds,candidates, ans);
        }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombinations(0,target,ds,candidates,ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna