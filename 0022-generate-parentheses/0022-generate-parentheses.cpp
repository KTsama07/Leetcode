class Solution {
public:
    void solve(int open, int close, string op , vector<string>&ans){
        if(open== 0 && close == 0){
            ans.push_back(op);
            return;
        }
        if(open > 0){
            op += '(';
            solve(open-1, close,op,ans);
            op.pop_back();
        }
        if(close > open){
            op += ')';
            solve(open, close-1,op,ans);
            op.pop_back();
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        int open = n;
        int close= n;
        vector<string> ans;
        string op = "";
        solve(open,close,op,ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna