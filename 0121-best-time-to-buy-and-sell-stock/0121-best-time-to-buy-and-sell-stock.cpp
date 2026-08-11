class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int low=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<nums.size();i++){
            int profit=nums[i]-low;
            low=min(nums[i],low);
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
    }
};