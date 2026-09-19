class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;
        for(int i =0; i<k;i++){
            sum += cardPoints[i];
        }
        int max_sum = sum ;
        int r_index = n-1;
        for(int i = k-1; i>=0;i--){
            sum -= cardPoints[i];
            sum += cardPoints[r_index];
            r_index--;
            max_sum = max(max_sum , sum);
        }
        return max_sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna