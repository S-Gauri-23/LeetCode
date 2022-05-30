class Solution {
public:
    int kthGrammar(int n, int k) {
        //Base Condition
        if(n == 1 & k == 1)
            return 0;
        
        //calculating the mid
        int mid = pow(2, n-1)/2;
        
        
        if(k <= mid)
            return kthGrammar(n-1, k);//if k value is present in the first half then k value will be same
        else
            return !kthGrammar(n-1, k-mid);//if k value is present in the second half then k = k -mid
    }
};

