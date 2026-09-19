class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int LS[3]={-1,-1,-1}; int cnt =0 ;
        for(int i =0; i<n;i++){
            LS[s[i]-'a']=i;
            cnt = cnt + 1 + min(LS[0],min(LS[1],LS[2]));
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna