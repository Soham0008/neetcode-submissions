class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res = 0;
        for(int i=0;i<32;i++){
            int bit = n & (1 << i);
            if(bit){
                res = res | (1 << (31 - i));
            }
        }
        return res;
    }
};
