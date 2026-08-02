class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0; int r = 0;
        unordered_map<char, int> m;
        int maxl = 0;
        while(r < s.size()){
            if(m.contains(s[r])){
                l = max(m[s[r]]+1, l);
            }
            m[s[r]] = r;
            maxl = max(maxl, r-l+1);
            r++;
        }
        return maxl;
    }
};
