class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        vector<int> result;
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0; i<n ;i++){
            st.insert(nums1[i]);
        }
        for(int j = 0; j<m ; j++){
                if(st.count(nums2[j])){
                    result.push_back(nums2[j]);
                    st.erase(nums2[j]);
                }
            
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna