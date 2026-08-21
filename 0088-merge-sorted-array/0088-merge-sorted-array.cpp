class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m-1;
        int p2 = n-1;
        int k = m+n-1;
        while( p2>=0){
            if(p1 >=0 && nums1[p1] > nums2[p2]){
                nums1[k]= nums1[p1];
                p1--;
            } else {
                nums1[k] = nums2[p2];
                p2--;
            }
            k--;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna