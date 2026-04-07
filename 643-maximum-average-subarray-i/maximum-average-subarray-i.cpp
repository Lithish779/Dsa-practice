class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int maxsum=0;
        int curr=0;
        for(int i=0;i<k;i++){
            curr+=nums[i];
        }
        maxsum=curr;
        for(int i=k;i<n;i++){
            curr+=nums[i];
            curr-=nums[i-k];
            maxsum=max(curr,maxsum);
        }
        return (double)maxsum / k;

        


        
        
    }
};