class Solution {
public:
    string reverseWords(string s) {
       string result;
        int i = 0;
        int n = s.length();
        
        while(i < n){
            while(i<n && s[i] == ' ')
                i++;
            
            if(i>=n) break;
            
            int j = i+1;
            while(j<n && s[j] != ' ')
                j++;
            
            string sub = s.substr(i, j-i); //substr(initial_point, number_of_characters);
            if(result.length() == 0) result = sub;
            else
                result = sub + ' ' + result;
            i = j+1;
        }
        return result;
    }
};