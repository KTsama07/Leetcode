class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int smallest = INT_MAX;
        bool odd = false;
        for( int i = 0; i < n ;i++){
            if(nums1[i]<smallest){
                smallest = nums1[i];
            }
            if(nums1[i]%2 != 0) odd = true;
        }
        if(smallest%2 == 1) return true;
        else {
            if(!odd) return true;
            else return false;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna