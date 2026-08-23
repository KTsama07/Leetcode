class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
     set<int> st(nums.begin(), nums.end());
     vector<vector<int>> ans;
     int start = -1;
     for(int i=lower; i <= upper; ++i){
        if(st.find(i) == st.end()) {
            //strart of missing range
            if(start == -1){
                start = i;
            }
        } else {
            if( start != -1){
                ans.push_back({start , i-1});
                start = -1;
            }

        }
        
     }
     if(start != -1){
        ans.push_back({start,upper});
     }   
     return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna