class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int ans= -1;
        vector<int>anns;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(target>nums[mid]){
                left=mid+1;
            }
            else if(target<nums[mid]){
                right=mid-1;
        }
            else{
                ans=mid;
                right=mid-1;
            }

        }
        anns.push_back(ans);
        int lef=0;
        int rig=n-1;
        int lans=-1;
        while(lef<=rig){
            int mid=lef+(rig-lef)/2;
            if(target>nums[mid]){
                lef=mid+1;
            }
            else if(target<nums[mid]){
                rig=mid-1;
            }
            else{
                lans=mid;
                lef=mid+1;
            }

        }anns.push_back(lans);
        return anns;
        
    }
};