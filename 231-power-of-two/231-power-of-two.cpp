class Solution {
public:
    
    bool isPowerOfTwo(int n) {
        //return false if the number is zero
        if(n == 0)
            return false;
        
        //return true if number is 1 or divide the n by 2 and call it recursively
        return ((n==1) || (n % 2 == 0 && isPowerOfTwo(n/2)));
            
    }
};