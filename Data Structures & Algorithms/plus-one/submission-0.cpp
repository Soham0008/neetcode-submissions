class Solution {
   public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if (digits[n - 1] == 9) {
            while (digits[n - 1] == 9) {
                digits[n - 1] = 0;
                if (n == 1) {
                    vector<int> res(digits.size() + 1, 0);
                    res[0] = 1;
                    return res;
                }
                n--;
            }
            digits[n - 1]++;
        } else {
            digits[n - 1]++;
        }
        return digits;
    }
};
