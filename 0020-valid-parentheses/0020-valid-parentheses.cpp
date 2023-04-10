class Solution {
public:
    bool isTrue( char s2, char s1 ){
        if( s1 == '(' and s2==')' ){
            return true;
        }
        else if( s1 == '{' and s2=='}' ){
            return true;
        }
        else if( s1 == '[' and s2==']' ){
            return true;
        }
        return false;
    }
    bool isValid(string str) {
        
        stack<char> st;
        char top;
        for( auto x:str ){
            if( x=='(' or x=='{' or x=='[' ){
                st.push(x);
            }
            else if( x==')' or x=='}' or x==']' ){
                
                if( !st.empty() ){
                    top = st.top();
                    st.pop();
                    if( !isTrue(x,top) ){
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if( st.empty() ){
            return true;
        }
        return false;
    }
};