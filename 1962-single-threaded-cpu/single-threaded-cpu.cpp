class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n=tasks.size();
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            v.push_back({tasks[i][0],tasks[i][1],i});
            
        }
        sort(v.begin(),v.end());
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;
        vector<int>ans;
        long long time=0;
        int i=0;
        while(i<n || !pq.empty()){
            if(pq.empty()&& time<v[i][0]){
                time=v[i][0];// we have to jump the time we have to keep the idle time aside
            }
            while(i<n && v[i][0]<=time){
                pq.push({v[i][1],v[i][2]});//we push time req and index
                i++;// if the time is less then the cpu time we will push the task into priority queue
            }
            int processtime=pq.top().first;
             int index=pq.top().second;
            pq.pop();
            ans.push_back(index);
            time+=processtime;
        }
        return ans;
        
    }
};