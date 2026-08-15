class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double winsum=0;
    
        for(int i=0;i<k;i++){
            winsum+=nums[i];
        }
         double windavg=winsum/k;
         double maxwinsum=windavg;
         for(int i=k;i<n;i++){
            winsum+=nums[i];
            winsum-=nums[i-k];
            windavg=winsum/k;
            maxwinsum=max(windavg,maxwinsum);


         }
        return maxwinsum;
    }
};