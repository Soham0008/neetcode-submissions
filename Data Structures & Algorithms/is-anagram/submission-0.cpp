class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {return false;}
        else {
            vector<int> counter1(26,0);
            vector<int> counter2(26,0);

            for (auto &ch : s){
                counter1[ch - 'a']++;
            }
            for (auto &ch : t){
                counter2[ch - 'a']++;
            }

            if(counter1 == counter2){ return true; }
            else { return false; }

        }
    }
};
