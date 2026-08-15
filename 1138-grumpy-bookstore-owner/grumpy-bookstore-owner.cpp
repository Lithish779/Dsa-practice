class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int m=minutes;
        int n=customers.size();
        int cs=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                cs+=customers[i];

            }
        }
        int curr=0;
        for(int i=0;i<m;i++){
            if(grumpy[i]==1){
                curr+=customers[i];

            }
        }
        int maxs=curr;
        for(int i=m;i<n;i++){
            if(grumpy[i]==1){
                curr+=customers[i];
                
            }
            if(grumpy[i-m]==1){
                curr-=customers[i-m];
            }
            maxs=max(maxs,curr);
        }
        return cs+maxs;
        
    }
};