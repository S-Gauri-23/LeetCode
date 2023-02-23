class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(auto c: tokens){
            if((c == "+")  || (c == "-") || (c == "*") || (c == "/")){
                
                long long int op2 = st.top();
                st.pop();
                
                long long int op1 = st.top();
                st.pop();
                
                switch(c[0]){
                    case '+': {
                        st.push(op1 + op2);
                        break;
                    }
                    case '-': {
                        st.push(op1 - op2);
                        break;
                    }
                    case '*': {
                        st.push(op1 * op2);
                        break;
                    }
                    case '/': {
                        st.push(op1 / op2);
                        break;
                    }
                }
            }
            else{
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};