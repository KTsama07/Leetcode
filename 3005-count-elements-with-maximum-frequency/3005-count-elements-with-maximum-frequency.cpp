class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int hash[101] = {0};
        for(int i=0; i<nums.size();i++){
            hash[nums[i]] +=1;
        }
        // sort(hash,hash+101);
        // int t = 0;
        // for(int i=0; i<101;i++){
        //     if(hash[i]==hash[100]){
        //         t = t + hash[i];
        //     }
        // }
        int max = 0;
        int total = 0;
        for(int i = 0 ; i < 101; i++){
            if(hash[i]>max){
                max = hash[i];
                total = max;
            } else if(hash[i]==max){
                total += hash[i];
            }
        }
        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna