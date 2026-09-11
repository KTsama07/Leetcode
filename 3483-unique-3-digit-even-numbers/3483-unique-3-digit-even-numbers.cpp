class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        for(auto a: digits){
            freq[a]++;
        }
        int ans = 0;
        for(int i = 100; i<1000;i += 2){
            int a = i/100;
            int b = (i/10)%10;
            int c = i%10;
            vector<int> need(10,0);
            need[a]++;
            need[b]++;
            need[c]++;
            bool poss = true;
            for(int d=0; d<=9; d++){
                if(need[d] > freq[d]){
                    poss = false;
                    break;
                }
            }
            if(poss) {
                ans += 1;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna