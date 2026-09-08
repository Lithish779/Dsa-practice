class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>freq;
        long long currsum=0;
        long long maxsum=0;
        for(int i=0;i<n;i++){
            currsum+=nums[i];
            freq[nums[i]]++;
            if(i>=k){
                currsum-=nums[i-k];
                freq[nums[i-k]]--;
                if(freq[nums[i-k]]==0){
                    freq.erase(nums[i-k]);
                }
            }
            if(i>=k-1){
                if(freq.size()==k){
                    maxsum=max(currsum,maxsum);
                }

            }
        }
        return maxsum;
        
    }
};