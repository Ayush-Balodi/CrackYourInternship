class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        stack<pair<char,int>> st;
        string result = "";
        int n=s.size();
        
        for( int i=0 ; i<n ; i++ ){
            
            if( st.empty() or s[i] != st.top().first ){
                st.push({s[i],1});
            }
            else if( s[i] == st.top().first ){
                auto prev=st.top();
                st.pop();
                st.push({prev.first,prev.second+1});
            }
            if( st.top().second == k ){
                st.pop();
            }
        }
        
        while( !st.empty() ){
            auto curr = st.top();
            st.pop();
            while( curr.second --  ){
                result += curr.first;
            }
        }
        
        reverse( result.begin(), result.end() );
        
        return result;
    }
};