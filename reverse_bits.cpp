class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        n=((n & 0xffff0000) >>16)| ((n & 0x0000ffff) <<16);
        n=((n & 0xff00ff00) >>8 ) | ((n & 0x00ff00ff) <<8) ;
        n=((n & 0xF0F0F0F0 )>>4 ) | ((n & 0xF0F0F0F) <<4) ;
        n=((n & 0xCCCCCCCC) >>2 ) | ((n & 0x33333333) <<2) ;
        n=((n & 0xAAAAAAAA) >>1 ) | ((n & 0x55555555) <<1) ;
        return n;
    }
};