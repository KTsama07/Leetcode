class Solution {
public:
void findcombinations(int indx , int target , vector<int>&ds ,vector<int>& candidates,vector<vector<int>>&ans){
           if(target == 0) {
            ans.push_back(ds);
            return;
           }
           for (int i = indx ; i < candidates.size(); i++){
            if(i>indx && candidates[i]==candidates[i-1]) continue;
            if(candidates[i] > target) break;

            ds.push_back(candidates[i]);
            findcombinations(i+1,target-candidates[i],ds,candidates,ans);
            ds.pop_back();
           }
        }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        findcombinations(0,target,ds,candidates,ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna