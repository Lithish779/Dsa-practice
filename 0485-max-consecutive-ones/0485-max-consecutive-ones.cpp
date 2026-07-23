class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr=0;
        int maxcurr=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                curr++;
            }
            else{
                curr=0;
            }
            maxcurr=max(curr,maxcurr);

        }
        return maxcurr;
        
    }
};