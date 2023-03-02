class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        
        int start=0, end=0, max=0;
        set<char> s;
        
        while( start<str.size() ){
            
            auto it = s.find(str[start]);
            
            if( it == s.end() ){
                if( max < (start-end+1) ){
                    max = (start-end+1);
                }
                s.insert(str[start]);
                start++;
            }
            else{
                s.erase(str[end]);
                end++;
            }
        }
        return max;
    }
};