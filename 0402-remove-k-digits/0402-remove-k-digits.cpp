class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for(auto digits : num){
            while(!st.empty() && k && st.top() > digits){
                --k;
                st.pop();
            }
            st.push(digits); 
            if(st.size()==1 && digits=='0') st.pop();
        }
        while(!st.empty() && k){
            st.pop();
            --k;
        }
        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return (res.size()==0) ? "0" : res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna