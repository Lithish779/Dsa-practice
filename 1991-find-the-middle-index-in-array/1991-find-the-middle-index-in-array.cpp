
class Solution {
public:
    int  findMiddleIndex(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int num:nums){
            sum+=num;
        }
        int left=0;
        for(int i=0;i<n;i++){
            int right=sum-left-nums[i];
            if(left==right){
                return i;
            }
            left+=nums[i];
        }
        return -1;
        
    }
};