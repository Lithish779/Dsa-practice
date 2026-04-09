class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            int count=(a&b)<<1;
            a=a^b;
            b=count;
        }
        return a;
        
    }
};