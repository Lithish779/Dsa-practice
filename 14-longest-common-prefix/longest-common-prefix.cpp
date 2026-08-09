class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[strs.size()-1];
        string ans="";
        int n=min(first.size(),last.size());
        for(int i=0;i<n;i++){
            if(first[i]!=last[i])break;
            else{
                ans+=first[i];
            }

        }
        return ans;
        
    }
};