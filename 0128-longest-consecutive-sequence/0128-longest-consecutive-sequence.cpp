class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        for(auto x: st){
            if(st.find(x-1) != st.end()) continue;
            int curr = x;
            int len = 1;
            while(st.find(curr+1) != st.end()){
                curr++;
                len++;
            }
            ans = max(len,ans);
        }
       
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna