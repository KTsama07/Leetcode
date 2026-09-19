class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int leftsum= 0;
        for(int i =0; i<k;i++){
            leftsum += cardPoints[i];
        }
        int max_sum = leftsum ; int rightsum = 0;
        int r_index = n-1;
        for(int i = k-1; i>=0;i--){
            leftsum -= cardPoints[i];
            rightsum += cardPoints[r_index];
            r_index--;
            max_sum = max(max_sum , leftsum+rightsum);
        }
        return max_sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna