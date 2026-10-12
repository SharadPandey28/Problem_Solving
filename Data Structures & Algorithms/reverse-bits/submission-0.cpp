class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t k=0;
        for(int i=0;i<32;i++){
            int bit=n%2;
            k=(k<<1)|bit;
            n=n/2;
        }
        return k;
    }
};
