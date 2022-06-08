// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

    void solve(int N, int zero, int one, vector<string> &s, string op){
        if(N == 0){
            s.push_back(op);
            return;
        }
        
        string op1 = op;
        op1.push_back('1');
        solve(N-1, zero, one+1, s, op1);
        
        
        if(one > zero){
            string op2 = op;
            op2.push_back('0');
            solve(N-1, zero+1, one, s, op2);
        }
        
    }
    
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string> s;
	    int zero = 0;
	    int one  = 0;
	    string op = "";
	    solve(N, zero, one, s, op);
	    return s;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends