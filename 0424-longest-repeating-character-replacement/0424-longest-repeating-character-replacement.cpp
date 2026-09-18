class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int l = 0; int r=0;
        int max_freq_index=0;
        int max_len = 0;
        vector<int> h_map(26,0); //h_map[char - 'A']
        while(r < n){
            char curr = s[r] - 'A';
            h_map[curr]++;
            if(h_map[max_freq_index]<h_map[curr]) max_freq_index = curr;
            int curr_len = r-l+1;
            if((curr_len - h_map[max_freq_index])<=k){
                max_len = max(max_len , curr_len);
            } else{
                h_map[s[l]-'A']--;
                l++;
            }
            r++;
        }
        return max_len;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna