class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
     bitset<32>bi(n);
     string s=bi.to_string();
     reverse(s.begin(),s.end());
     bitset<32>b2(s);
     return b2.to_ullong();

    }
};