class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>MP;
        MP['I']=1;
        MP['V']=5;
        MP['X']=10;
        MP['L']=50;
        MP['C']=100;
        MP['D']=500;
        MP['M']=1000;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(i+1<s.size()&&MP[s[i]]<MP[s[i+1]]){
                ans-=MP[s[i]];

            }
            else{
                ans+=MP[s[i]];
            }
        }
        return ans;
        
    }
};