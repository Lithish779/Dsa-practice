class Solution {
public:
    long long removeZeros(long long n) {
        string ans=to_string(n);
         string a= "";
        for(char ch:ans){
             
            if(ch!='0'){
                a+=ch;

            }
        }
        long long res=stoll(a);
        return res;
        
    }
};