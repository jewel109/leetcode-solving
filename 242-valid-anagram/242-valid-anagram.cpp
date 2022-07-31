class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> ana_map;
        if(s.length() != t.length()) return false;
        
        for (int i=0; i<s.length(); i++){
            ana_map[s[i]] = ana_map[s[i]] +1;
            ana_map[t[i]] = ana_map[t[i]] - 1;
        }
        
        for(auto elem:ana_map){
            if(elem.second) return false;
        }
        return true;
    }
};