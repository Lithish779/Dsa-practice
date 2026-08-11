class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if(n<0){
            N= -N;
            x=1/x;
        }
        double power=1;
        while(N>0){
            if((N%2)==1){
                power=power*x;
            }
            x=x*x;
            N=N/2;
        }
        return power;
        
    }
};