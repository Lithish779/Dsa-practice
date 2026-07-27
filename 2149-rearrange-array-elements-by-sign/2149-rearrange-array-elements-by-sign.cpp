class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0;
        int neg=1;
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[pos]=nums[i];
                pos+=2;
            }
            else{
                ans[neg]=nums[i];
                neg+=2;
            }
        }
        return ans;
        
    }
};
// vector<int> rearrangeArray(vector<int>& nums) {
//         stack<int>pos;
//         stack<int>neg;
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]>0){
//             pos.push(nums[i]);
//         }
//         else{
//             neg.push(nums[i]);
//         }
//     }
//     vector<int>ans;
//     while(!pos.empty()&& !neg.empty()){
//         ans.push_back(neg.top());
//         neg.pop();
//         ans.push_back(pos.top());
//         pos.pop();
//     }
//      reverse(ans.begin(),ans.end());
//     return ans;
        
//     }