class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        long long n=nums.size();
        long long sum=0;
        long long sqsum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            sqsum+=1LL*nums[i]*nums[i];
        }
        long long expsum=n*(n+1)/2;
        long long expsqsum=n*(n+1)*(2*n+1)/6;
         long long diff=sum-expsum;//A-B
         long long sqdiff=sqsum-expsqsum;//A² - B²
         long long sumAB= sqdiff/diff;//A+B
         long long A=(diff+sumAB)/2;//repeating num
         long long B=A-diff;//missingnum
         return{(int)A,(int)B};


        

    }
};