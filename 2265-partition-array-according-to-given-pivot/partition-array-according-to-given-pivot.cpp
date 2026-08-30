class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>small;
        vector<int>big;
        vector<int>same;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==pivot){
                same.push_back(nums[i]);
            }
         else if(nums[i]<pivot){
            small.push_back(nums[i]);
          }
          else{
            big.push_back(nums[i]);
          }
        }
        small.insert(small.end(),same.begin(),same.end());
        small.insert(small.end(),big.begin(),big.end());
        return small;
        
    }
};