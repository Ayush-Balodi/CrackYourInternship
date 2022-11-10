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

/*
In this approach we make use of extra string where we store the current character and if we found the last character of the new string equal to the string current charater than we pop it from the new string.

TC = O(n)
Auxiliary space = O(n)
Still don't get it, see the code:-)
*/

class Solution {
public:
    string removeDuplicates(string str) {
        string ans;
        for( auto c : str ){
            if(ans.size() && ans.back()==c){ans.pop_back();}
            else{ans.push_back(c);}
        }
        return ans;
    }
};