class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int j=0;
        int zeros=0;
        int maxlength=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeros++;
            }
            while(zeros>1){
                if(nums[j]==0){
                    zeros--;
                }
                j++;
            }
            int length=i-j+1;
           maxlength=max(length,maxlength);

        }
        return maxlength-1;
        
    }
};