class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nset(nums.begin(),nums.end());
        int maxi=0;

        for(int num : nset){
            if(nset.find(num-1) == nset.end()){
                int length = 1;
                while(nset.find(num+length) != nset.end()){
                    length++;
                }
                maxi = max(maxi, length); 
            }
        }
        return maxi;
    }
};
