class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        
        unordered_map<char, int> map;
        
        for(int i = 0; i < s.length(); i++){
            map[s[i]]++;
        }
        
        for(int i = 0; i < t.length(); i++){
            if(map.find(t[i]) != map.end()){
                map[t[i]] -= 1;
            }
            else
                return false;
        }
        
        for(auto it : map){
            if(it.second != 0){
                return false;
            }
        }
        
        return true;
    }
};