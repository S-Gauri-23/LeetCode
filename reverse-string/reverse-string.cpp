class Solution {
public:
    
    void solve(vector<char>& s, int start, int end){
        if(start >= end)
            return;
        
        int temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        solve(s, start+1, end-1);
    }
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;
        solve(s, start, end);
    }
};