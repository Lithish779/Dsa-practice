class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>left;
        vector<int>right;
        int leftsum=0;
        for(int i=0;i<n;i++){
            left.push_back(leftsum);
            leftsum+=nums[i];

        }
        int rightsum=0;
        for(int i=n-1;i>=0;i--){
  right.push_back(rightsum);
  rightsum+=nums[i];

        }
        reverse(right.begin(),right.end());
        vector<int>ans;
        for(int i=0;i<n;i++){
        int res=abs(left[i]-right[i]);
        ans.push_back(res);

        }
        return ans;
    }
};