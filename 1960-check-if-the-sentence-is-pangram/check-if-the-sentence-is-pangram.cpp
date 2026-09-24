class Solution {
public:
    bool checkIfPangram(string s) {
      vector<bool>present(26,false);
      for(char ch:s){
        if(ch>='a'&& ch<='z'){
            present[ch-'a']=true;
        }
        else if(ch>='A'&&ch<='Z'){
            present[ch-'A']=true;
        }
      }
      for(bool x:present){
        if(!x){
            return false;
        }
      }return true;

        
    }
};