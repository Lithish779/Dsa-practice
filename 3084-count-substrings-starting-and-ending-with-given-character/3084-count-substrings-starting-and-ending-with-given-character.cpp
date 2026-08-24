class Solution {
public:
    long long countSubstrings(string s, char c) {
        int m=0;
        for(char ch: s){
            if(ch==c){
                m++;
            }
        }
        int i=0;
        
        int ansst=-1;
        while(i<s.size()){
            if(s[i]==c){
                
                ansst=i;
                break;
                
            }
            i++;
        }
            int j=i;
            long long ans=0;
            while(j<s.size()&& m!=0){
                if(s[j]==c){
                    ans+=m;

                    m--;
                  
                }
                j++;
            }
           
        
        return ans;
        
        
    }
};