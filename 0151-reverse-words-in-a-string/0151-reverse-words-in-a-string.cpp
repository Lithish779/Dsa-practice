class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string ans="";
        for(char ch: s){
            if(ch!=' '){
                ans+=ch;
            }
            else{
                if(!ans.empty()){
                st.push(ans);
                ans="";
                }
            }
        }
        if(!ans.empty()){
            st.push(ans);
        }
        string word="";
        while(!st.empty()){
            word+=st.top();
            st.pop();
            if(!st.empty()){

            
            word+=" ";
            }
        }
        return word;
        
    }
};