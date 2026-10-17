class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(128, 0);
        int n = s.size();
        int i = 0;
        int mal = 0;

        for (int j = 0; j < n; j++) {
            char t = s[j];

            if (mp[t] == 0) {
                mp[t] = 1;
            } else {
                while (mp[t] == 1) {
                    mp[s[i]] = 0;
                    i++;
                }
                mp[t] = 1;
            }

            mal = max(mal, j - i + 1);
        }

        return mal;
    }
};