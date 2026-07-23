class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minprice=prices[0];
        for(int i=0;i<prices.size();i++){
            minprice=min(minprice,prices[i]);
            int curr=prices[i]-minprice;
            maxprofit=max(maxprofit,curr);

        }
        return maxprofit;
        
    }
};