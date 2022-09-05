class Solution {
public:
    bool isValid(string s) {
        stack<int> stk;
        int n = s.length();
        for(int i = 0; i < n; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                stk.push(s[i]);
            else{
                if(stk.empty()) return false;
                
                char c = stk.top();
                stk.pop();
                
                if((c == '(' && s[i] == ')') || (c == '[' && s[i] == ']') || (c == '{' && s[i] == '}')){
                    
                }
                else
                    return false;
            }
        }
        
        if(stk.empty()) return true;
        else return false;
    }
};