class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        
        vector<int>ans(n,0);
        for(auto num:bookings){
        int first=num[0];
        int last=num[1];
        int seats=num[2];
        for(int j=first;j<=last;j++){
            ans[j-1]+=seats;

        }

        }
        return ans;
    }
};