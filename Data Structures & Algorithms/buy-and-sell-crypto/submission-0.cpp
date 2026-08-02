class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int maxp = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min = prices[i];
                continue;
            }
            int p = prices[i] - min;
            maxp = max(maxp,p);
        }
        return maxp;
    }
};
