class Solution {
public:
    int sumOfMultiples(int n) {
        int sum3=0;
        int sum5=0;
        int sum7=0;
        for(int i=1;i<=n;i++){
            if(i%3==0){
                sum3+=i;//3+6
            }
            else if(i%5==0){
                sum5+=i;//5
            }
            else if(i%7==0){
                sum7+=i;//7
            }

        }
        int ans=sum3+sum5+sum7;
        return ans;
        
    }
};