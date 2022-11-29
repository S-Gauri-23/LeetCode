//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<int> st;
        for(char c: x){
            if(c == '(' || c == '[' || c == '{'){
                st.push(c);
            }
            else{
                if(!st.empty()){
                    char ch = st.top();
                    st.pop();
                    
                    if((ch == '[' && c == ']') || (ch == '{' && c == '}') || (ch == '(' && c == ')')){
                        
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        
        if(!st.empty()){
            return false;
        }
        else{
            return true;
        }
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends