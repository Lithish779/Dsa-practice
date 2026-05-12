class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        vector<int>rowmin(n,INT_MAX);
        vector<int>colmax(m,INT_MIN);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                rowmin[i]=min(rowmin[i],arr[i][j]);
                colmax[j]=max(colmax[j],arr[i][j]);
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==rowmin[i]&&arr[i][j]==colmax[j]){
                    ans.push_back(arr[i][j]);
                }
            }
        }return ans;
        
    }
};