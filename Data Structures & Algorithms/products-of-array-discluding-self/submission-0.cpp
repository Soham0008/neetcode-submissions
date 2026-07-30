class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zero_count = 0;
        for(auto& num: nums){
            if(num != 0) product *= num;
            else {zero_count++;}
        }
        if (zero_count>1) return vector<int>(nums.size(),0);

        for (auto& num : nums){
            if(zero_count == 0) num = product/num;
            else {
                if (num == 0) num = product;
                else num = 0;
            }
        }
        return nums;
    }
};
