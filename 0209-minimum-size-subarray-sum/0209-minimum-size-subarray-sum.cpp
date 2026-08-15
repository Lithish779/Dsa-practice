class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int minn=INT_MAX;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>=target){
                int length=i-j+1;
                minn=min(length,minn);

            sum-=nums[j];
            j++;
            
            
        }
        
    }
    if(minn==INT_MAX){
        return 0;
    }
    return minn;
    }
};