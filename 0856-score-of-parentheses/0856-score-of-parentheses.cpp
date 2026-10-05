class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for(char c: s){
            if(c == '('){
                st.push(0);
            } else {
                int inner_score = st.top();
                st.pop();

                int currscore = max(2*inner_score, 1);
                st.top() += currscore;
            }
        }
        return st.top();
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna