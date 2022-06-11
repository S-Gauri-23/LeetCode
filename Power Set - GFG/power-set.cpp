// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	    void solve(vector<string>& s, string ip, string op){
	        if(ip.length() == 0){
	            if(op.length() != 0){
	                s.push_back(op);
	            }
	           return;
	           }
	            
	            string op1 = op;
	            string op2 = op;
	            
	            op1.push_back(ip[0]);
	            ip.erase(ip.begin()+0);
	            
	            solve(s, ip, op1);
	            solve(s, ip, op2);
	        
	    }
		vector<string> AllPossibleStrings(string ip){
		    // Code here
		    vector<string> s;
		    string op = "";
		    solve(s, ip, op);
		    sort(s.begin(), s.end());
		    return s;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends