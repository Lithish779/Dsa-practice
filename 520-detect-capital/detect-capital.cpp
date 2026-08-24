class Solution {
public:
    bool detectCapitalUse(string word) {
        int captial=0;
        for(int i=0;i<word.size();i++){
            if(isupper(word[i])){
                captial++;
            }

        }
        if(captial==word.size()){
            return true;
        }
        if(captial==0){
            return true;
        }
        else if(captial==1 && isupper(word[0])){
            return true;
        }
        else{
            return false;
        }
        
    }
};