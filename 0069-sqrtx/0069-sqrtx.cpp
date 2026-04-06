class Solution {
public:
    int mySqrt(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            if((long long)i*i<=n){
                ans=i;
            }
            else
            break;
        }
        return ans;
    
        
    }
};