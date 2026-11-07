class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> sub;
        d(0,res,sub,nums,target);
        return res;
    }

    void d(int i,vector<vector<int>>& res, vector<int> & sub, vector<int> nums,int target){
        if(target ==0){
            res.push_back(sub);
            return;
        }
        if(target<0 || i>= nums.size()){
            return;
        }

        sub.push_back(nums[i]);
        d(i,res,sub,nums,target - nums[i]);
        sub.pop_back();
        d(i+1,res,sub,nums,target);

    }
};
