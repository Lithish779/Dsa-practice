class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int maxfreq=0;
        for(auto x:freq){
            if(x.second>maxfreq){
                maxfreq=x.second;
            }

        }
        int ans=0;
        for(auto x:freq){
            if(x.second==maxfreq){
                ans+=x.second;
            }
        }
        return ans;
        


        
    }
};