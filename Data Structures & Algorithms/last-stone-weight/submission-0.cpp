class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> stoned;
        for(int s: stones) stoned.push(s);

        while(stoned.size() > 1){
            int y = stoned.top();
            stoned.pop();
            int x = stoned.top();
            stoned.pop();
            if(y > x) stoned.push(y-x);
        }
        if(stoned.size() ==1) return stoned.top();
        else return 0;
    }
};
