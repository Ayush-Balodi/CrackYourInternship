class Solution {
public:
    string simplifyPath(string str) {
        
        int n=str.length();
        stack<string> st;
        
        for( int i=0 ; i<n ; i++ ){
            
            if(str[i] == '/'){
                continue;
            }
            string temp;
            
            while( i<str.length() && str[i] != '/' ){
                temp += str[i];
                i++;
            }
            
            if( temp == "." ){
                continue;
            }
            else if( temp == ".." ){
                if( !st.empty() ){
                    st.pop();
                }
            }
            else{
                st.push(temp);
            }
        }
        
        string result = "";
        
        while( !st.empty() ){
            result = "/" + st.top() + result;
            st.pop();
        }
        
        if(result.size() == 0){
            return "/";   
        }
        
        return result;
    }
};