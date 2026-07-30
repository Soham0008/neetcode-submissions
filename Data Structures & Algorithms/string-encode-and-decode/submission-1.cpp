class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(string s: strs){
            encoded += to_string(s.size()) + '-' + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> res;
        while(i<s.size()){
            string num;
            while(s[i] - '0' >= 0 and s[i] - '0' <= 9){
                num += s[i];
                i++;
            }
            int number = stoi(num);
            i++;
            string org;
            while(number--){
                org += s[i];
                i++;
            }
            res.push_back(org);
        }
        return res;
    }
};
