class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        if(k>s2.size()){
            return false;
        }
        unordered_map<char,int>freq;
        unordered_map<char,int>freq2;
        for(int i=0;i<s1.size();i++){
            freq[s1[i]]++;
        }
        for(int i=0;i<s1.size();i++){
            freq2[s2[i]]++;
        }
        if(freq==freq2){
            return true;
        }
        for(int i=k;i<s2.size();i++){
            freq2[s2[i]]++;
            freq2[s2[i-k]]--;
            if(freq2[s2[i-k]] == 0){
    freq2.erase(s2[i-k]);
}
            if(freq==freq2){
                return true;
            }
        }
return false;
        
    }
};