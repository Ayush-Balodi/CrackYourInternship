class Solution {
public:
    bool match( char c1, char c2 ){
        if( c1=='(' and c2==')' ){
            return true;
        }
        else if( c1=='[' and c2==']' ){
            return true;
        }
        else if( c1=='{' and c2=='}' ){
            return true;
        }
        return false;
    }
    
    bool isValid(string str) {
        stack<char> st;
        
        for( auto x:str ){
            
            if( x=='(' or x=='[' or x=='{' ){
                st.push(x);
            }
            if( x==')' or x==']' or x=='}' ){
                if( !st.empty() and match(st.top(),x) ){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        
        if(st.empty()){ return true; }
        return false;
    }
};