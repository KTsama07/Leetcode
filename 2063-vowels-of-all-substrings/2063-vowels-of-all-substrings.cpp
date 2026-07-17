class Solution {
public:
    long long countVowels(string word) {
        long long count = 0;
        long long n = word.size();
        long long total_SS = (n%2==0) ? (n/2)*(n+1) : n*(n+1)/2;
        for(int i = 0; i < n ; ++i){
            if( word[i] == 'a'|| word[i]== 'e'|| word[i]== 'i'|| word[i]== 'o'|| word[i]== 'u'){
                long long red_up = (n-i-1)*(n-i)/2; 
                long long red_down = (static_cast<long long>(i) * (i + 1)) / 2;
                count += (total_SS - red_up - red_down);
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna