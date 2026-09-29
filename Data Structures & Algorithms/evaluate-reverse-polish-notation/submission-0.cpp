class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(int i = 0; i < tokens.size(); i++) {

            if(tokens[i] != "+" && tokens[i] != "-" &&
               tokens[i] != "*" && tokens[i] != "/") {

                st.push(stoi(tokens[i]));
            }
            else {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                int ans;

                if(tokens[i] == "+")
                    ans = a + b;
                else if(tokens[i] == "-")
                    ans = a - b;
                else if(tokens[i] == "*")
                    ans = a * b;
                else
                    ans = a / b;

                st.push(ans);
            }
        }

        return st.top();
    }
};