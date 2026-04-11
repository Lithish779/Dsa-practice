class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int mini=nums[0];
        int profit=0;
        int n=nums.size();
    for(int i=0;i<n;i++){
        int cost=nums[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,nums[i]);

    }
    return profit;
        
    }
};