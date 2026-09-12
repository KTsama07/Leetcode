class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefixMax(n);
        prefixMax[0] = height[0];
        for(int i = 1 ; i < n;i++){
            prefixMax[i] = max(prefixMax[i-1] , height[i]);
        }
        vector<int> suffixMax(n);
        suffixMax[n-1] = height[n-1];
        for(int i = n-2; i>=0; i--){
            suffixMax[i] = max(suffixMax[i+1] , height[i]);
        }
        int total = 0;
        for(int i = 0 ; i< n; i++){
            int Lmax = prefixMax[i];
            int Rmax = suffixMax[i];
            if(height[i] < Lmax && height[i] < Rmax){
                total += min(Lmax, Rmax) - height[i];
            }
        }
        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna