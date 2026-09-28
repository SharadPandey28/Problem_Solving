class Solution {
public:

    string encode(vector<string>& strs) {
        string en = "";

        for (string str : strs) {
            for (char c : str) {
                if (c == '|') {
                    en += "||";
                }
                else {
                    en += c;
                }
            }

            en += "|#";
        }

        return en;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string temp = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '|') {

                if (i + 1 < s.size() && s[i + 1] == '|') {
                    temp += '|';
                    i++;
                }
                else if (i + 1 < s.size() && s[i + 1] == '#') {
                    ans.push_back(temp);
                    temp = "";
                    i++;
                }
            }
            else {
                temp += s[i];
            }
        }

        return ans;
    }
};