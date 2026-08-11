class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //brute force
        set<int> st;
        for(int i =0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        int index=0;
        for( auto it : st){
            nums[index] = it;
            index++; 
        }
        return index++;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna