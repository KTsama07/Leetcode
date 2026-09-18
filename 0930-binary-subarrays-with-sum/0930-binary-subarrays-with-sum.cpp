class Solution {
public:
    int function(vector<int>& nums, int goal){
        //function to count number of subarrays with sum less than or equal to goal
        if(goal<0) return 0; //edge case handling
        int l = 0 ; int r = 0 ; int sum = 0 ; int cnt = 0 ;
        int n = nums.size();
        while(r<n){ //this while loop runs for O(N)
            sum += nums[r];
            while(sum>goal){ // this while loop would run for max 'N' times in entire calulation
                sum -= nums[l];
                l++;
            }
            cnt += r-l+1;
            r++;
        }
        return cnt;
        //T.C. ~ O(2N) & S.C. ~ O(1)
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return function(nums , goal) - function(nums , goal-1);
        //T.C. = O(4N) in worst case and S.C. = O(1)
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna