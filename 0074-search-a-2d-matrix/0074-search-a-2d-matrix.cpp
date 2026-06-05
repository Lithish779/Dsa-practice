class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n= matrix[0].size();
    //     for(int i=0;i<n;i++){
    //         if(target>=matrix[i][0]&&target<=matrix[1][n-1]){      BRUTE FORCE
    //             for(int j=0;j<n;j++){
    //                 if(matrix[i][j]==target)return true;
    //             }
    //         }
    //     }return false;

   int low=0;
   int high=m*n-1;
   while(low<=high){
    int mid=low+(high-low)/2;
    int row=mid/n;
    int col=mid%n;
    if(matrix[row][col]==target){
        return true;
    }
    else if(matrix[row][col]<target){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
   }
   return false;
    





        
    }
};