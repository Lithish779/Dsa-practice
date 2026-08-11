class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        sort(stones.begin(),stones.end(),greater<int>());
        while(stones.size()>=2){
            if(stones[0]==stones[1]){
                stones.erase(stones.begin(),stones.begin()+2);
            }
            else{
               int add= stones[0]-stones[1];
                stones.erase(stones.begin(),stones.begin()+2);
                stones.push_back(add);
                sort(stones.begin(),stones.end(),greater<int>());
                
            }

        }
        if(stones.empty()){
            return 0;
        }
       
            return stones[0];
        
    }
};