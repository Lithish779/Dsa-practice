class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int best=0;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                best=max(best,count);
            }
            else{
                count=0;
            }
        }
        return best;
        
    }
};