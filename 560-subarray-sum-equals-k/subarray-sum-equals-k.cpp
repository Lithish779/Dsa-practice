class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count=0;
        int sum=0;
        mp[0]=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int need=sum-k;
            if(mp.count(need)){
                count+=mp[need];
            }
            mp[sum]++;
        }
        return count;

        
        
    }
};