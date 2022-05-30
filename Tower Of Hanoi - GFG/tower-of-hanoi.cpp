// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    
    void solve(int N, int from, int to, int aux, long long& count){
        count++;
        
        //if only one disc is present at the source
        if(N == 1){
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
            return;
        }
        
        //moving n-1 discs from rod 1 to rod 2
        solve(N-1, from, aux, to, count);
        
        //moving last disc from rod 1 to rod 3
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        
        //moving n-1 discs from rod 2 to rod 3
        solve(N-1, aux, to, from, count);
    }
    
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        long long count = 0;
        solve(N, from, to, aux, count);
        return count;
    }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.  // } Driver Code Ends