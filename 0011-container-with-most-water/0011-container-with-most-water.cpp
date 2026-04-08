class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lp=0;
        int rp=n-1;
        int maxwater=0;
        while(lp<rp){
           int water= rp-lp;
           int ht=min(height[rp],height[lp]);
           int currwater=water*ht;
           maxwater=max(currwater,maxwater);
           if(height[lp]<height[rp]){
            lp++;
           }
           else{
            rp--;
           }


        }
        return maxwater;
        
    }
};