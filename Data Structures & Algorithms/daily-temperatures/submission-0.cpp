
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size() - 1;
        vector<int> res(temperatures.size(), 0);
        stack<int> st;

        while(n >= 0) {
            
            while(!st.empty() && temperatures[st.top()] <= temperatures[n]) {
                st.pop();
            }

            if(!st.empty()) {
                res[n] = st.top() - n;
            }

            st.push(n);
            n--;
        }

        return res;
    }
};