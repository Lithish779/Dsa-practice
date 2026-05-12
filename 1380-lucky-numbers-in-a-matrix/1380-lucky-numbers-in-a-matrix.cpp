class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& arr) {
        int n = arr.size();          // number of rows
    int m = arr[0].size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                bool rowmin=true;
                bool colmax=true;
                for(int k=0;k<m;k++){
                    if(arr[i][k]<arr[i][j]){
                        rowmin=false;
                        break;
                    }
                }
                for(int k=0;k<n;k++){
                    if(arr[k][j]>arr[i][j]){
                        colmax=false;
                        break;
                    }
                }
                if(rowmin && colmax){
                    ans.push_back(arr[i][j]);
                }
            }
        }return ans;
        
    }
};