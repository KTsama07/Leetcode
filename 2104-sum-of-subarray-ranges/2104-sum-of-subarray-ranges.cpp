class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long min_sum = 0;
        stack<int> st;
        //find sum of subarray minimums
        for(int i = 0 ; i <=n ; i++){
            while(!st.empty() && (i==n || nums[st.top()] > nums[i])){
                int mid = st.top();
                st.pop();
                int left = st.empty() ? -1 : st.top();
                int left_count = mid - left;
                int right_count = i - mid;
                min_sum += 1LL *  left_count * right_count * nums[mid];
            }
            st.push(i);
        }
        while(!st.empty()) st.pop();
        long long max_sum = 0;
        for(int i = 0 ; i <= n ; i++){
            while(!st.empty() && (i==n || nums[st.top()] < nums[i])){
                int mid = st.top();
                st.pop();
                int left = st.empty() ? -1 : st.top();
                int left_count = mid-left;
                int right_count = i - mid;
                max_sum += 1LL * left_count * right_count * nums[mid];
            }
            st.push(i);
        }
        return max_sum - min_sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna