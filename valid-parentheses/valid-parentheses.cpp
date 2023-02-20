class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char ch;
        for(char c: s){
            if(c =='(' || c =='{' || c =='['){
                st.push(c);
            }
            else{
                if(st.empty()) return false;
                
                ch = st.top();
                st.pop();
                
                if((ch == '(' && c == ')') || (ch == '[' && c == ']') || (ch == '{' && c == '}')){
                    
                }
                else
                    return false;
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};