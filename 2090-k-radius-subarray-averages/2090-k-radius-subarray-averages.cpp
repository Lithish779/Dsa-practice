class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(n,-1);
        long long windowsum=0;
        if (2 * k + 1 > n) return ans;//edge case
        for(int i=0;i<k*2+1;i++){
            windowsum+=nums[i]; 
        }
        long long an=windowsum/(k*2+1);
        ans[k]=an;
        long long maxsum=windowsum;
        for(int j=1;k*2+j<n;j++){
          maxsum+=nums[k*2+j];
          maxsum-=nums[j-1];
          int ann=maxsum/(k*2+1);
          ans[k+j]=ann;

        }
        return ans;

        
    }
};