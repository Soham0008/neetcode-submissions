class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        int n = s1.size();
        int m = s2.size();
        vector<int> c1(26);
        for(char c:s1){
            c1[c-'a']++;
        }
        vector<int> c2(26);
        for(int i=0;i<n;i++){
            c2[s2[i]-'a']++;
        }
        if(c1 == c2) return true;
        for(int i=1;i<=m-n;i++){
            c2[s2[i-1] - 'a']--;
            c2[s2[i+n-1] - 'a']++;
            if(c1 == c2) return true;
        }
        return false;
    }
};
