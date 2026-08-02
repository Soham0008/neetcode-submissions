class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l=0;int r= n-1;
        int res = 0;

        while(l<r){
            int size = (r-l)*min(heights[l],heights[r]);
            if(size>res){
                res = size;
            }
            if(heights[l]>heights[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return res;
    }
};
