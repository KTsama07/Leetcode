class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
     vector<bool> present(upper+1, false);
     for(auto x: nums) if(x>=lower && x<= upper) present[x] = true;
     vector<vector<int>> ans;
     for(int i=lower; i <= upper;){
        if(present[i]) {
            i++;
            continue;
        } 
        int start = i;
        while(i<= upper && !present[i]) ++i;
        ans.push_back({start, i-1});
     }  
     return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna