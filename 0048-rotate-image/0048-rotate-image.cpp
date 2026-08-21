class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //transpose the matrix
        // swap the lower tri matrix with upper tri matrix
        for(int i = 0 ; i < n-1 ;  i++){
            for(int j = i+1 ; j < n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        //reverse the rows
        for(int i = 0 ; i < n ;  i++){
            reverse(matrix[i].begin() , matrix[i].end());
        }

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna