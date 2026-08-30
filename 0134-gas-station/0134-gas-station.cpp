class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0;
        int totaltank=0;
        int currtank=0;
        int n=gas.size();
        for(int i=0;i<n;i++){
        int diff=gas[i]- cost[i];
        totaltank+=diff;
        currtank+=diff;
        if(currtank<0){
            start=i+1;
            currtank=0;
        }
        }
        return totaltank>=0?start:-1;
        
    }
};