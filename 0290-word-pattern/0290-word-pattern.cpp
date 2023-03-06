class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;
        istringstream ss(s);
        string word;
        int i=0;
        
        while( ss >> word ){
            if( mp1.find(pattern[i]) == mp1.end() ){
                mp1[pattern[i]] = word;
            } 
            if( mp2.find(word) == mp2.end() ){
                mp2[word] = pattern[i];
            }
            if( (mp1[pattern[i]] != word) || (mp2[word] != pattern[i]) ){
                return false;
            }
            i++;
        }
        if( i<pattern.length() ){ return false; }
        return true;
    }
};