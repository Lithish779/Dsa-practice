class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int left=0;
        int right=n;
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[left]);
            ans.push_back(nums[right]);
            right++;
            left++;
            
        }
        return ans;
        
    }
};