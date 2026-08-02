class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int l = 0; int r = n-1;
        int mini = nums[l];
        while(l<=r){
            if(nums[l]<nums[r]){
                mini = min(mini,nums[l]);
                break;
            }
            int mid = (l+r)/2;
            mini = min(mini,nums[mid]);

            if(nums[l]<=nums[mid]){
                l = mid+1;
            }
            else {
                r = mid-1;
            }
        }
        return mini;
    }
};
