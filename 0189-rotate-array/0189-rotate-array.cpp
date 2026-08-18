class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.empty()) return;
        int n = nums.size();
        k = k%n;
        if(k==0) return;
        k = n - k;
        vector<int> temp;
        temp.resize(k);
        for(int i=0; i<k; i++){
            temp[i]=nums[i];
        }
        for(int i=k; i<n; i++){
            nums[i-k]= nums[i];
        }
        for(int i=n-k ; i<n;i++){
            nums[i] = temp[i-(n-k)];
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna