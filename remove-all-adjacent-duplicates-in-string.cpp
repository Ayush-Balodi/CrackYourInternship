/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string

    TC = O(n)
    Auxiliary space = O(n)
*/

class Solution {
public:
    string removeDuplicates(string str) {
        
        string ans = "";
        stack<char> st;
        int n = str.length();
        
        for( int i=0 ; i<n ; i++ ){
            
            if(st.empty()){

                st.push(str[i]);
                continue;
            }
            if( str[i] == st.top() ){

                st.pop();
            }
            else{

                st.push(str[i]);
            }
        }

        while( !st.empty() ){
            ans += st.top();
            st.pop();
        }        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};