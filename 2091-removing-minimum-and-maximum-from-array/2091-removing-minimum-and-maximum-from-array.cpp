class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minindex=0;
        int maxindex=0;
        int n=nums.size();
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[maxindex]){
                maxindex=i;
            }
            if(nums[i]<nums[minindex]){
                minindex=i;
            }
        }
        int left =min(minindex,maxindex);
        int right=max(maxindex,minindex);
        int fromfront=right+1;
        int fromback=n-left;
        int fromboth=(left+1)+(n-right);
        return min({fromfront,fromback,fromboth});

        
    }
};