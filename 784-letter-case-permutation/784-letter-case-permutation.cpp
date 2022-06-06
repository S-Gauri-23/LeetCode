class Solution {
public:
    vector<string> ans;
    
    void solve(string ip, string op){
        if(ip.length() == 0)
        {
            ans.push_back(op);
            return;
        }
        
        
        if(ip[0] >= 'A' && ip[0] <= 'Z' || ip[0] >= 'a' && ip[0] <= 'z')
        {
            string op1 = op;
            string op2 = op;
            op1.push_back( tolower(ip[0]) );
            op2.push_back( toupper(ip[0]) ); 
            
            ip.erase( ip.begin()+0 );
            
            solve(ip, op1);
            solve(ip, op2);
        }
        
        else if(ip[0] >= '0' && ip[0] <= '9')
        {
            
            op.push_back(ip[0]);
            ip.erase( ip.begin()+0 );
            solve(ip, op);
        }
        
        
    }
    
    vector<string> letterCasePermutation(string ip) {
        
        solve(ip, "");
        return ans;
    }
};