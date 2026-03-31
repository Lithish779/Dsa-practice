class Solution {
public:
bool isvowel(char &ch){
    if(ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u'||ch=='A' || ch=='E' || ch=='O' || ch=='I' || ch=='U'){
        return true;
    }
    return false;
}
    string reverseVowels(string s) {
        int left=0;
        int right=s.length()-1;
        while(left<right){
            if(!isvowel(s[right])){
                right--;
            }
            else if(!isvowel(s[left])){
                left++;
            }
            else{
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;

        
    }
};