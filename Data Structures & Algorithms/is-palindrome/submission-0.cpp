class Solution {
public:
    bool isPalindrome(string s) {
        string k="";
        for(int i = 0; i < s.size(); i++) {
            if(isalnum(s[i])) {
                k += tolower(s[i]);
            }
        }
        string l=k;
        reverse(l.begin(), l.end());
        if(k==l) return true;
        return false;
    }
};
