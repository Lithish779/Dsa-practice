class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int currsum=0;
    //     vector<int>res(n);
    //     for(int i=0;i<n;i++){
    //         currsum+=nums[i];//bruteforce
    //         res[i]=currsum;
            
    //     }
    //     return res;
        
    // }
    for(int i=1;i<n;i++){
        nums[i]+=nums[i-1];
    }
    return nums;
    }
};