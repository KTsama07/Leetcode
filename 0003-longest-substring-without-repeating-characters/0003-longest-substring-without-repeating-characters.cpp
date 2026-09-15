class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        char char_freq[128] = {0};
        int left = 0 ;
        int max_len = 0 ;
        for(int i = 0 ;  i < n ; i++){
            char curr = s[i];
            char_freq[curr]++;
            while(char_freq[curr] > 1){
                char_freq[s[left]]--;
                left++;
            }
            max_len = max(max_len, i-left+1);;
        }
        return max_len;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna