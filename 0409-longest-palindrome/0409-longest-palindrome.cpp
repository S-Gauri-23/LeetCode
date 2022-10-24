class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> map;
        int flag = 0, sum = 0;
        
        for(char c: s){
            map[c]++;
        }
        
        for(auto it: map){
            if(map.size() == 1)
                return it.second;
            if(it.second % 2 == 0)
                sum += it.second; 
            else{
                flag = 1;
                sum += it.second-1;
            }
        }
        
        if(flag == 1)
            return sum += 1;
        else
            return sum;
    }
};