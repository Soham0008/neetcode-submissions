class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> v;
        for(int i = 0;i<nums.size();i++){
            if(v.contains(target - nums[i])) {
                return {v[target - nums[i]],i};
            }
            v[nums[i]] = i;
        }
        
    }
};
