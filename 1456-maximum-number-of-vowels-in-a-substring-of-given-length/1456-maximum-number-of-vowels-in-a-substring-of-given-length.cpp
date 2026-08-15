class Solution {
public:
 bool isovel(char c){
        return c == 'a' || c == 'e' || c == 'i' || 
           c == 'o' || c == 'u';
       }
    int maxVowels(string s, int k) {
        int n=s.size();
      
       int oc=0;
       for(int i=0;i<k;i++){
        if(isovel(s[i])){
            oc++;
        }

       }
       int wino=oc;
       int maxov=wino;
       for(int i=k;i<n;i++){
        if(isovel(s[i])){
            wino+=1;
        }
        if(isovel(s[i-k])){
            wino-=1;
        }
        maxov=max(wino,maxov);
        
       }
       return maxov;
        
    }
};