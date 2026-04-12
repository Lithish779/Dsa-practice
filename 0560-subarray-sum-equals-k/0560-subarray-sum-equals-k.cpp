class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
        mp[0]=1;
        int prefix=0;
        int count=0;
        for(int i=0;i<n;i++){
            prefix+=nums[i];
            int remove=prefix-k;
            count+=mp[remove];
            mp[prefix]+=1;
        }
        return count;

        
    }
};