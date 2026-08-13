class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int first2=nums[n-1]*nums[n-2];
        int last2=nums[0]*nums[1];
        int maxproduct=first2-last2;
        return maxproduct;
    }
    
};