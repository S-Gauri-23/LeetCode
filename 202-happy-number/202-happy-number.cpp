class Solution {
public:
    
    int solve(int n){
        int total_sum = 0; 
       while(n){
           int rem = n % 10;
           total_sum += pow(rem, 2);
           n /= 10;
       }
        return total_sum;
    }
        
    bool isHappy(int n) {
            if(n <= 0)
                return false;

            unordered_set<int> num;
        
            while(num.find(n) == num.end()){
                num.insert(n);
                n = solve(n);

                if(n == 1)
                    return true;
            }
            return false;
       }
};