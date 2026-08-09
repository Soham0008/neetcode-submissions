class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
        unordered_map<int,int> m;
        while(n){
            int digit = n % 10;
            n = n/10;
            sum += digit * digit;
            if(n == 0) {
                n = sum;
                if(sum == 1) return true;
                if(m.contains(sum)) return false;
                m[sum]++;
                sum = 0;
            }
        }
        return false;
    }
};
