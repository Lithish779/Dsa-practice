class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int j=0;
        string s="";
        while(j<chars.size()){
            int count=0;
            while(j<chars.size()&&chars[i]==chars[j]){
                count++;
                j++;
            }
            s+=chars[i];
            if(count>1){
                s+=to_string(count);
            }
            i=j;
        
        }
        for(int k=0;k<s.size();k++){
            chars[k]=s[k];
        }
        return s.size();
        
    }
};