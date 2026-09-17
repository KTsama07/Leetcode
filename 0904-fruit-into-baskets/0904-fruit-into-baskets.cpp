class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0 ;
        int r = 0 ;
        int max_len = 0;
        unordered_map<int, int> mpp;
        while(r < fruits.size()){
            mpp[fruits[r]]++;
            while(mpp.size() > 2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0) mpp.erase(fruits[l]);
                l++;
            }
            max_len = max(max_len , r-l+1);
            r++;
        }
        return max_len;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna