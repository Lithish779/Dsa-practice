class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        int n=s.size();
        for(char ch:s){
            if(ch!='*'){
                st.push(ch);
            }
            if(ch=='*'){
                st.pop();
            }
        }
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
        
    }
};