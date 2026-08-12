class Solution {
public:
    int hammingWeight(int n) {
        int ones=0;
        for(int bits=0;bits<32;bits++){
           
            
                if(n&(1<<bits)){
                    ones++;
                }
            }
        
        return ones;
        
    }
};