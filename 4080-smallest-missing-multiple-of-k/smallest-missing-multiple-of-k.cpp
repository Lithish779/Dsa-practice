class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>ans(nums.begin(),nums.end());
        int anns=0;
        
        for(int i=1; ;i++){
           int multiple=i*k;
            if(ans.find(multiple)==ans.end()){
                return multiple;
            }


        }
        return -1;
       
    }
};