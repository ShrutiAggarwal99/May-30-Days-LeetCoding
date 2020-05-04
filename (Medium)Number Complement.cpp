// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/

// Medium

class Solution {
public:
    int findComplement(int num) {
        
        int lastSetBitPos = -1;
        for(int i=31;i>=0;i--){
            if((num & (1<<i)) != 0){
                lastSetBitPos = i;
                break;
            } 
        }
        
        for(int i=0;i<=lastSetBitPos;i++){
            int mask = 1<<i;
            num = num^mask;
        }
        return num;
    }
};

// T.C = O(1) - just 32 bits
// S.C = O(1)
// Concept - Bit Manipulation, not proficient in it, but now I am able to think more in it
