class Solution {
public:

    struct comp{
        bool operator()(vector<int>& a, vector<int>& b){
            return a[2] > b[2];
        }
    };

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>, vector<vector<int>>, comp> minheap;
        for(auto& p: points){
            int d = (p[0]*p[0]) + (p[1]*p[1]);
            p.push_back(d);
            minheap.push(p);
        }
        vector<vector<int>> res;
        while(k--){
            vector<int> p = minheap.top();
            minheap.pop();
            res.push_back({p[0],p[1]});
        }
        return res;
    }
};
