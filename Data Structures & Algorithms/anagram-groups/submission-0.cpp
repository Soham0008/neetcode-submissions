class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> store;
        for(auto &str : strs) { 
            vector<int> counter(26,0);
            for (auto &ch : str){
                counter[ch - 'a']++;
            }
            store[counter].push_back(str);
        }
        vector<vector<string>> res;
        for (const auto& [counter, v] : store){
            res.push_back(v);
        }
        return res;
    }
};
