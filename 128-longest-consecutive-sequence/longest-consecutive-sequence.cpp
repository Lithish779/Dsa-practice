class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>res(nums.begin(),nums.end());
        int longest=0;
        int n=nums.size();
        for(int num : res){
            if(res.find(num-1)==res.end()){
            int curr=num;
            int count=1;
            
            while(res.find(curr+1)!=res.end()){
                count++;
                curr++;
            }
            
            longest=max(longest,count);
            }


        }
        return longest;
        
    }
};