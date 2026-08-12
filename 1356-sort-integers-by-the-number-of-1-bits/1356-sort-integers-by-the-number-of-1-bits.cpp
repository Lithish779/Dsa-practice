class Solution {
public:
int ones(int num){
    int ones=0;
    for(int i=0;i<32;i++){
        
            if(num &(1<<i)){
                ones++;
            }

        }
    
    return ones;
}
    vector<int> sortByBits(vector<int>& nums) {
        
        vector<pair<int,int>>v;
        for(int num:nums){
            int one=ones(num);
            v.push_back({one,num});
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(auto p:v){
            ans.push_back(p.second);

        }
        return ans;

    }
};