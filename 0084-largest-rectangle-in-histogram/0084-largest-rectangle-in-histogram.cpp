class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        int max_area = 0;
        for(int i = 0 ; i<=n; i++){
            while(!st.empty() && (i==n || heights[st.top()] >= heights[i])){
                int mid = st.top();
                st.pop();
                int left = st.empty() ? -1 : st.top();
                int count = i - left - 1 ;
                max_area = max(max_area , (count)*heights[mid]);
            }
            st.push(i);
        }
        return max_area;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna