class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int _5count = 0;
        int _10count = 0; 
        for(int i=0;i<bills.size();i++){
            if(bills[i] == 5) _5count++;   
            else if(bills[i] == 10){
                _10count++;
                if(!_5count) return false;
                _5count--;
            } 
            if(bills[i] == 20){
                if(!_5count) return false;
                if(!_10count){ 
                    if(_5count<3) return false;
                    _5count -=3;
                }
                _5count--;
                _10count--;
            }
        }
        return true;
    }
};