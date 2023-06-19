//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
int firstOccurence(int arr[], int n, int target){
    int low = 0, high = n-1, mid = 0, first = -1;
    
    while(low <= high){
        mid = (low+high)/2;
        
        
        if(arr[mid] == target){
            first = mid;
            high = mid - 1;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return first;
}

int lastOccurence(int arr[], int n, int target){
    int low = 0, high = n-1, mid = 0, last = -1;
    
    while(low <= high){
        mid = (low+high)/2;
        
        if(arr[mid] == target){
            last = mid;
            low = mid + 1;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return last;
}

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int first = firstOccurence(arr, n, x);
	    if(first == -1) return 0;
	    int last = lastOccurence(arr, n, x);
	    return (last - first) + 1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends