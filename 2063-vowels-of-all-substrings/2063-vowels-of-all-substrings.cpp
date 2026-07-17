class Solution {
public:
    long long countVowels(string word) {
        long long count = 0;
        long long n = word.size();
        for(int i = 0; i < n ; ++i){
            if( word[i] == 'a'|| word[i]== 'e'|| word[i]== 'i'|| word[i]== 'o'|| word[i]== 'u'){
                count += (i+1)*(n-i);
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna