class Solution {
public:
    bool isPalindrome(int x) {
        long long ans=0;
        int n=x;
        if(x<0){
            return false;
        }
        while(x>0){
            int digit=x%10;
            ans=ans*10+digit;
            x=x/10;
        }
        return ans==n;
        
    }
};