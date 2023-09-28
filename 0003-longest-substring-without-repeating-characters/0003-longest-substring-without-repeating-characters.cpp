class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        
        int n=str.length();
        if(n == 0){ return 0; }
        set<char> st;
        
        int start=0, end=0, maxval=0;
        
        while( start<n ){
            
            auto it = st.find(str[start]);
            
            if( it == st.end() ){
                maxval = max(maxval, start-end+1);
                st.insert(str[start]);
                start++;
            }
            else{
                st.erase(str[end]);
                end++;
            }
        }
        return maxval;
    }
};