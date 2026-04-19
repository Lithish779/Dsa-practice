class Solution {
public:
    int secondHighest(string s) {
        int largest=-1,slargest=-1;
        for(char c:s){
            if(isdigit(c)){
                int num=c-'0';
                if(num>largest){
                    slargest=largest;
                    largest=num;
                }
                else if(num<largest &&num>slargest){
                    slargest=num;
                }

            }
        }
        return slargest;
        
    }
};