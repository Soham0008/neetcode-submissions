class Solution {
public:
    bool isPalindrome(string s) {
        string compact;
        for(auto& ch: s){
            if(isalnum(ch)) compact += toupper(ch);
        }
        string compare = compact;
        reverse(compact.begin(),compact.end());
        if(compact == compare) return true;
        else return false;

    }
};
