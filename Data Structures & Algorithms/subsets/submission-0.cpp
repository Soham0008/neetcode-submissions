class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sub;
        dfs(res,0,sub,nums);
        return res;
    }

    void dfs(vector<vector<int>> & res,int i,vector<int> & sub,vector<int> nums){
        if(i>= nums.size()){
            res.push_back(sub);
            return;
        }
        sub.push_back(nums[i]);
        dfs(res,i+1,sub,nums);
        sub.pop_back();
        dfs(res,i+1,sub,nums);
    }
};
