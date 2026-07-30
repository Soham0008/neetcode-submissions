class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> counter;
        for( int num :nums){
            counter[num]++;
        }
        priority_queue<pair<int,int>> topk;
        for(auto& [a,b] : counter){
            topk.push({b,a});
        }
        vector<int> res;
        while(k--){
            res.push_back(topk.top().second);
            topk.pop();
        }
        return res;

    }
};
