class Solution {
public:
    bool isValid(string s) {
        stack<char>st; int n= s.size();
        for( int j=0 ;j<n;j++){
            if( s[j]=='(' or s[j]=='[' or s[j]=='{') st.push(s[j]);
            else{
                if( st.empty()) return false;
                else if( ((s[j]==')' and st.top() == '(') or (s[j]==']' and st.top()=='[') or (s[j]=='}' and st.top()=='{'))) st.pop();
                else return false;
            }

        }
        return st.empty();
    }
};
