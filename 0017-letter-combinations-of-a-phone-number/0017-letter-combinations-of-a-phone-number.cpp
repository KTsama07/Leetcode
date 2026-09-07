class Solution {
public:
    void solve(int ind,string& digits,vector<string>& ans,vector<string>& keypad,string& ds){
        if(ind==digits.size()){
            ans.push_back(ds);
            return;
        }
        string letters = keypad[digits[ind]-'0'];
        for(char c: letters){
            ds.push_back(c);
            solve(ind+1,digits,ans,keypad,ds);
            ds.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> keypad = {
            "", //0
            "", // 1
            "abc",  // 2
            "def",  // 3
            "ghi",  // 4
            "jkl",  // 5
            "mno",  // 6
            "pqrs", // 7
            "tuv",  // 8
            "wxyz"  // 9
        };
        vector<string> ans;
        string ds;
        solve(0,digits,ans, keypad,ds);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna