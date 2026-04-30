class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int n=height.size();
        int right=n-1;
        int maxwater=0;

        while(left<right){
            int water=right-left;
            int ht=min(height[left],height[right]);
            int currwater=water*ht;
            maxwater=max(currwater,maxwater);
            if(height[right]<height[left]){
                right--;
            }
            else{
                left++;
            }

            


        }
        return maxwater;
        
    }
};