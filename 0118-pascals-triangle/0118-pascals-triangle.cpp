class Solution {
public:
    vector<int> generaterows(int n){
        long long ans = 1;
        vector<int> n_row;
        n_row.push_back(1);
        if(n == 1) return n_row;
        for(int c = 1 ; c < n ; c++){
            ans *= (n-c);
            ans /= (c);
            n_row.push_back(ans);
        }
        return n_row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i = 1 ; i <= numRows ; i++){
            res.push_back(generaterows(i));
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna