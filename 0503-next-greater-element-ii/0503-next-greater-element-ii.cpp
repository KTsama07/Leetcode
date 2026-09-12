class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        vector<int> nge(n,-1);
        for(int i = 2*n-1; i>=0; i--){
                while(!st.empty() && nums[i%n]>=st.top()){
                    st.pop();
                }
                if(i<n) nge[i] = !st.empty() ? st.top() : -1;
                st.push(nums[i%n]);
        }
        return nge;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna