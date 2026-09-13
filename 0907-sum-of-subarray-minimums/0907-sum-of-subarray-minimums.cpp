class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        stack<int> st1;
        vector<int> nse(n); //next greater element
        for(int i = n-1 ; i >= 0 ; i--){
            while(!st1.empty() && arr[st1.top()] >= arr[i]){
                st1.pop();
            }
            nse[i]= st1.empty() ? n : st1.top();
            st1.push(i);
        }
        stack<int> st2;
        vector<int> psee(n) ; //previous smaller or equal element
        for(int i = 0 ; i < n ; i++){
            while(!st2.empty() && arr[st2.top()] > arr[i]){
                st2.pop();
            }
            psee[i]= st2.empty() ? -1 : st2.top();
            st2.push(i);
        }
        int mod = 1e9 + 7;
        int total = 0;
        for(int i = 0 ; i < n ; i++){
            int left_d = i - psee[i];
            int right_d = nse[i] - i;
            total = (total + (left_d * right_d * 1LL * arr[i])%mod) % mod;
        }  
        return total; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna