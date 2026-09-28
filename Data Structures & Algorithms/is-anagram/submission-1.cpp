class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
       unordered_map<char,int> mp;
       for(int i=0;i<n;i++){
        mp[s[i]]++;
       }
       for(int i=0;i<n;i++){
        mp[t[i]]--;
       }
       int k=mp.size();
       for(char i='a';i<='z';i++){
        if(mp[i]!=0){
            return false;
        }
       }
       return true;
    }
};
