class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n,-1);
        for(int i = 0; i < n ;i++){
            for(int j=i+1 ; j < i+n ; j++){
                int ind = j % n ;
                if(nums[ind] > nums[i]){
                    nge[i] = nums[ind];
                    break;
                }
            }
        }
        // for(int i = n-1; i>=0; i--){
        //         while(!st.empty() && nums[i]>=st.top()){
        //             st.pop();
        //         }
        //         if(!st.empty()){
        //             nge[i] = st.top();
        //         }
        //         st.push(nums[i]);
        // }
        // while(!st.empty()&&nums[n-1] >= st.top()){
        //     st.pop();
        // }
        // nge[n-1] = !st.empty() ? st.top() : -1 ;
        return nge;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna