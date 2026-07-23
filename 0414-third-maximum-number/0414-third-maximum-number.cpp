class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long largest=LONG_MIN;
        long sclargest=LONG_MIN;
        long third=LONG_MIN;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==largest || nums[i]==sclargest ||nums[i]==third){
                continue;
            }
            if(nums[i]>largest){
                
                
                third=sclargest;
                sclargest=largest;
                largest=nums[i];
            }
            else if(nums[i]>sclargest){
                third=sclargest;
                sclargest=nums[i];

            }
            else if(nums[i]>third){

            
                third=nums[i];

            }
        }
        
        return third==LONG_MIN ? largest:third;
        
    }
};