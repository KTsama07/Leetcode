class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n = asteroids.size();
        for(auto curr : asteroids){
            while(!st.empty() && curr < 0 && st.top() > 0 ){
                   if(st.top() < -curr){
                    st.pop();
                   }
                   else if(st.top() == -curr){
                    st.pop();
                    curr = 0;
                    break;
                   }
                   else {
                    curr = 0;
                    break;
                   }
            }
            if(curr != 0) st.push(curr);
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna