class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int mini=nums[0];
        int bigi=0;
        for(int i=0;i<n;i++){
            
            int diff=nums[i]-mini;
            bigi=max(diff,bigi);
            mini=min(nums[i],mini);

            
            
        }
        if(bigi <= 0) return -1;
        return bigi;

        
    }
};